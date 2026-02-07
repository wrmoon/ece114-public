#!/usr/bin/python3
import json
import sys
import re
import os
import argparse
import copy
from collections import OrderedDict

SETTINGS="settings"
EXT="extensions"
GLOB="globalState"
STORAGE="storage"
NAME="ECE114"
FONT_FAMILY="editor.fontFamily"

GLOB_STORAGE_KEEP = [
            "workbench.panel.pinnedPanels",
            "workbench.explorer.views.state.hidden",
            "workbench.view.extensions.state.hidden",
            "workbench.scm.views.state.hidden",
            "workbench.auxiliarybar.pinnedPanels"
]

def ordered_dict_insert_after(od: OrderedDict, after_key, new_key, new_value):
    """
    Insert (new_key, new_value) into an OrderedDict immediately after after_key.

    Raises:
        KeyError: if after_key is not in od
    """
    if after_key not in od:
        raise KeyError(f"{after_key!r} not found in OrderedDict")

    new_od = OrderedDict()

    for k, v in od.items():
        new_od[k] = v
        if k == after_key:
            new_od[new_key] = new_value

    return new_od


def strip_trailing_commas(text):
    # Remove trailing commas in objects and arrays
    text = re.sub(r',\s*([}\]])', r'\1', text)
    return text


def convert(d):
    if type(d) is dict:
        for k in d:
            d[k] = convert(d[k])
        return d
    elif type(d) is str and (d[0] == '{' or d[0] == '['):
        s = strip_trailing_commas(d)
        d = json.loads(s)
        return convert(d)
    else:
        return d


def write_json(name, d, **kwargs):
    with open(name, "w") as f:
        print("writing", name)
        json.dump(d, f, **kwargs)


def create_profile(d):
    # escape the settings
    if SETTINGS in d and SETTINGS in d[SETTINGS]:
        d[SETTINGS][SETTINGS] = json.dumps(d[SETTINGS][SETTINGS], indent=8)
        d[SETTINGS] = json.dumps(d[SETTINGS], separators=(',', ':'))

    # escape the extensions
    if EXT in d:
        d[EXT] = json.dumps(d[EXT], indent=8)

    # escape the global state
    if GLOB in d and STORAGE in d[GLOB]:
        for k in d[GLOB][STORAGE]:
            d[GLOB][STORAGE][k] = json.dumps(d[GLOB][STORAGE][k], separators=(',', ':'))
        d[GLOB] = json.dumps(d[GLOB], separators=(',', ':'))


def make_os_profiles(d, make_json):
    compiler_path = {
        "MacOS":   "/usr/bin/clang" , 
        "Windows": "C:\\msys64\\clang64\\bin\\clang.exe",
        "Linux":   "/usr/bin/clang"
        }
    map_changes = {
        "Windows": { 
            "c":        "cd $dir && ggg --quiet $fileName && $fileNameWithoutExt.exe",
            "cpp":      "cd $dir && ggg --quiet $fileName && $fileNameWithoutExt.exe",
            "makefile": "cd $dir && make && .build\\debug.exe"
            },
        }
    for os,cp in compiler_path.items():
        myd = copy.deepcopy(d)
        myd["name"] = NAME + "--" + os
        if SETTINGS in myd and SETTINGS in myd[SETTINGS]:
            s = OrderedDict(myd[SETTINGS][SETTINGS])
            myd[SETTINGS][SETTINGS] = ordered_dict_insert_after(s, "C_Cpp.debugShortcut", "C_Cpp.default.compilerPath", cp)
        if os in map_changes:
            for lang, action in map_changes[os].items():
                myd[SETTINGS][SETTINGS]["code-runner.executorMap"][lang] = action

        if make_json:
            write_json(os + "--" + NAME + ".json", myd, indent=4)
        create_profile(myd)
        write_json(os + "--" + NAME + ".code-profile", myd, separators=(',', ':'))


def main(raw_filename, make_json):
    with open(raw_filename, 'r') as f:
        d = convert(json.load(f))

    if make_json:
        write_json(raw_filename + ".json", d, indent=4)

    # only keep some globalState entries
    if GLOB in d and STORAGE in d[GLOB]:
        gs = {}
        for k in d[GLOB][STORAGE]:
            if k in GLOB_STORAGE_KEEP:
                gs[k] = d[GLOB][STORAGE][k]
        d[GLOB][STORAGE] = gs

    # remove Vim extension
    if EXT in d:
        d[EXT] = list(filter(lambda x: x.get("identifier",{}).get("id","") != "vscodevim.vim", d[EXT]))

    # put editor font setting back to default
    if SETTINGS in d and SETTINGS in d[SETTINGS]:
        if FONT_FAMILY in d[SETTINGS][SETTINGS]:
            del d[SETTINGS][SETTINGS][FONT_FAMILY]

    if make_json:
        write_json(raw_filename + ".2.json", d, indent=4)

    make_os_profiles(d, make_json)
    return


def existing_file(path):
    if not os.path.isfile(path):
        raise argparse.ArgumentTypeError(f"Input file does not exist: {path}")
    return path


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Create OS profiles from raw .code-profile")

    parser.add_argument(
        type=existing_file,
        dest="in_file",
        help="Path to an existing input file"
    )
    parser.add_argument(
        '-j', '--json',
        action="store_true",
        dest="make_json",
        default=False,
        help="If specified, creates .json versions of profiles as well"
    )

    args = parser.parse_args()

    main(args.in_file, args.make_json)