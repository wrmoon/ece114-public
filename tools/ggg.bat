@echo off
setlocal enableextensions enabledelayedexpansion

set VERBOSE=1
set SANITIZE=

:loop
if "%1"=="" (
    goto usage
)
if "%1" == "-q" (
    set VERBOSE=0
    shift
    goto loop
)
if "%1" == "--quiet" (
    set VERBOSE=0
    shift
    goto loop
)
if "%1" == "/q" (
    set VERBOSE=0
    shift
    goto loop
)
if "%1" == "/s" (
    set SANITIZE=-fsanitize=address
    shift
    goto loop
)
if "%1" == "-s" (
    set SANITIZE=-fsanitize=address
    shift
    goto loop
)
if "%1" == "--sanitize" (
    set SANITIZE=-fsanitize=address
    shift
    goto loop
)
if "%1" == "/?" (
    goto usage
)
if "%1" == "/h" (
    goto usage
)
if "%1" == "-h" (
    goto usage
)
if "%1" == "--help" (
    goto usage
)

set folder=%~dp1
set base=%~n1
set dotc=%base%.c
set dotcpp=%base%.cpp

if exist %folder%%dotc% goto gcc
if exist %folder%%dotcpp% goto gpp
@echo ERROR: Cannot find %dotc% or %dotcpp%
exit /b 1

:gcc
set command=clang -g -Wall -Werror -std=gnu11 %SANITIZE% -o %folder%%base% %folder%%dotc% -lm
goto do

:gpp
set command=clang++ -g -Wall -Werror -std=gnu++11 %SANITIZE% -o %folder%%base% %folder%%dotcpp%
goto do

:do
if "%VERBOSE%" == "1" (
    echo rm -rf %folder%%base%
)
rm -rf %folder%%base%

if "%VERBOSE%" == "1" (
    echo %command%
)
%command%

:done
exit /b %errorlevel%

:usage
@echo ggg compiler tool 
@echo usage: ggg [flags] filename
@echo where filename is a c or .cpp file.
@echo flags:
@echo    /q -q --quiet      Quiet mode - output nothing
@echo    /s -s --sanitize   Compile with address sanitizer
@echo    /h -h --help    Display this help
