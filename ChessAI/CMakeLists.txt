cmake_minimum_required(VERSION 3.6)
project(ChessAI)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp piece.cpp piece.h position.cpp position.h ui.cpp ui.h move.cpp move.h square.cpp square.h)
add_executable(ChessAI ${SOURCE_FILES})