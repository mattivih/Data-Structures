cmake_minimum_required(VERSION 3.6)
project(Lab11)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp BinSTree.cpp BinSTree.h)
add_executable(Lab11 ${SOURCE_FILES})