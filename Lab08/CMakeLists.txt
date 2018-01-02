cmake_minimum_required(VERSION 3.6)
project(Lab08)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Time.h Time.cpp Dynlist.h)
add_executable(Lab08 ${SOURCE_FILES})