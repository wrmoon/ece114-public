#!/bin/bash

VERSION=$(git describe --always --dirty)
NOW=$(date)
TARGET=../../../ece114-tools/ECE114.zip

rm -fr _t
mkdir -p _t/assignments/hw1
mkdir -p _t/assignments/hw2
mkdir -p _t/labs/lab1
mkdir -p _t/labs/lab2
mkdir -p _t/setup/profiles
cp -Lr test _t/setup/
rm -fr _t/setup/test/cmake
cp -r profiles/*ECE114.code-profile _t/setup/profiles/
cp -r tools _t/
cp -r .vscode _t/

rm -f _t/setup/test/test1 _t/setup/test/test2 _t/setup/test/test1.exe _t/setup/test/test2.exe ECE114*.zip
pushd _t/setup/test/make > /dev/null
make clean > /dev/null
rm -fr mtest mtest.exe
popd > /dev/null

touch _t/VERSION.txt
echo ECE114 Setup and Tools >_t/VERSION.txt
echo Version: $VERSION>>_t/VERSION.txt
echo Created: $NOW>>_t/VERSION.txt

pushd _t > /dev/null
rm -fr $TARGET
zip -r $TARGET .
popd 

rm -fr _t
