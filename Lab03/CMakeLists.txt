cmake_minimum_required(VERSION 3.6)
project(Lab03)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Time.cpp Time.h List.h)
add_executable(Lab03 ${SOURCE_FILES})