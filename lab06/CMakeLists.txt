cmake_minimum_required(VERSION 3.6)
project(lab06)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES dynlist.cpp dynlist.h)
add_executable(lab06 ${SOURCE_FILES})