cmake_minimum_required(VERSION 3.16)
project(cmake_test VERSION 1.0
                   DESCRIPTION "test to see if cmake works"
                   LANGUAGES CXX)
add_executable(cmake_test mtest.cpp printer.cpp printer.h)
