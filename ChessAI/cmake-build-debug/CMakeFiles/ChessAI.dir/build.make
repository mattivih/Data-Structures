# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ChessAI.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ChessAI.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ChessAI.dir/flags.make

CMakeFiles/ChessAI.dir/main.cpp.o: CMakeFiles/ChessAI.dir/flags.make
CMakeFiles/ChessAI.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ChessAI.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChessAI.dir/main.cpp.o -c "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/main.cpp"

CMakeFiles/ChessAI.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChessAI.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/main.cpp" > CMakeFiles/ChessAI.dir/main.cpp.i

CMakeFiles/ChessAI.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChessAI.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/main.cpp" -o CMakeFiles/ChessAI.dir/main.cpp.s

CMakeFiles/ChessAI.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ChessAI.dir/main.cpp.o.requires

CMakeFiles/ChessAI.dir/main.cpp.o.provides: CMakeFiles/ChessAI.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ChessAI.dir/build.make CMakeFiles/ChessAI.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ChessAI.dir/main.cpp.o.provides

CMakeFiles/ChessAI.dir/main.cpp.o.provides.build: CMakeFiles/ChessAI.dir/main.cpp.o


CMakeFiles/ChessAI.dir/piece.cpp.o: CMakeFiles/ChessAI.dir/flags.make
CMakeFiles/ChessAI.dir/piece.cpp.o: ../piece.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ChessAI.dir/piece.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChessAI.dir/piece.cpp.o -c "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/piece.cpp"

CMakeFiles/ChessAI.dir/piece.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChessAI.dir/piece.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/piece.cpp" > CMakeFiles/ChessAI.dir/piece.cpp.i

CMakeFiles/ChessAI.dir/piece.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChessAI.dir/piece.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/piece.cpp" -o CMakeFiles/ChessAI.dir/piece.cpp.s

CMakeFiles/ChessAI.dir/piece.cpp.o.requires:

.PHONY : CMakeFiles/ChessAI.dir/piece.cpp.o.requires

CMakeFiles/ChessAI.dir/piece.cpp.o.provides: CMakeFiles/ChessAI.dir/piece.cpp.o.requires
	$(MAKE) -f CMakeFiles/ChessAI.dir/build.make CMakeFiles/ChessAI.dir/piece.cpp.o.provides.build
.PHONY : CMakeFiles/ChessAI.dir/piece.cpp.o.provides

CMakeFiles/ChessAI.dir/piece.cpp.o.provides.build: CMakeFiles/ChessAI.dir/piece.cpp.o


CMakeFiles/ChessAI.dir/position.cpp.o: CMakeFiles/ChessAI.dir/flags.make
CMakeFiles/ChessAI.dir/position.cpp.o: ../position.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ChessAI.dir/position.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChessAI.dir/position.cpp.o -c "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/position.cpp"

CMakeFiles/ChessAI.dir/position.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChessAI.dir/position.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/position.cpp" > CMakeFiles/ChessAI.dir/position.cpp.i

CMakeFiles/ChessAI.dir/position.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChessAI.dir/position.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/position.cpp" -o CMakeFiles/ChessAI.dir/position.cpp.s

CMakeFiles/ChessAI.dir/position.cpp.o.requires:

.PHONY : CMakeFiles/ChessAI.dir/position.cpp.o.requires

CMakeFiles/ChessAI.dir/position.cpp.o.provides: CMakeFiles/ChessAI.dir/position.cpp.o.requires
	$(MAKE) -f CMakeFiles/ChessAI.dir/build.make CMakeFiles/ChessAI.dir/position.cpp.o.provides.build
.PHONY : CMakeFiles/ChessAI.dir/position.cpp.o.provides

CMakeFiles/ChessAI.dir/position.cpp.o.provides.build: CMakeFiles/ChessAI.dir/position.cpp.o


CMakeFiles/ChessAI.dir/ui.cpp.o: CMakeFiles/ChessAI.dir/flags.make
CMakeFiles/ChessAI.dir/ui.cpp.o: ../ui.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ChessAI.dir/ui.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChessAI.dir/ui.cpp.o -c "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/ui.cpp"

CMakeFiles/ChessAI.dir/ui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChessAI.dir/ui.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/ui.cpp" > CMakeFiles/ChessAI.dir/ui.cpp.i

CMakeFiles/ChessAI.dir/ui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChessAI.dir/ui.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/ui.cpp" -o CMakeFiles/ChessAI.dir/ui.cpp.s

CMakeFiles/ChessAI.dir/ui.cpp.o.requires:

.PHONY : CMakeFiles/ChessAI.dir/ui.cpp.o.requires

CMakeFiles/ChessAI.dir/ui.cpp.o.provides: CMakeFiles/ChessAI.dir/ui.cpp.o.requires
	$(MAKE) -f CMakeFiles/ChessAI.dir/build.make CMakeFiles/ChessAI.dir/ui.cpp.o.provides.build
.PHONY : CMakeFiles/ChessAI.dir/ui.cpp.o.provides

CMakeFiles/ChessAI.dir/ui.cpp.o.provides.build: CMakeFiles/ChessAI.dir/ui.cpp.o


CMakeFiles/ChessAI.dir/move.cpp.o: CMakeFiles/ChessAI.dir/flags.make
CMakeFiles/ChessAI.dir/move.cpp.o: ../move.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ChessAI.dir/move.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChessAI.dir/move.cpp.o -c "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/move.cpp"

CMakeFiles/ChessAI.dir/move.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChessAI.dir/move.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/move.cpp" > CMakeFiles/ChessAI.dir/move.cpp.i

CMakeFiles/ChessAI.dir/move.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChessAI.dir/move.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/move.cpp" -o CMakeFiles/ChessAI.dir/move.cpp.s

CMakeFiles/ChessAI.dir/move.cpp.o.requires:

.PHONY : CMakeFiles/ChessAI.dir/move.cpp.o.requires

CMakeFiles/ChessAI.dir/move.cpp.o.provides: CMakeFiles/ChessAI.dir/move.cpp.o.requires
	$(MAKE) -f CMakeFiles/ChessAI.dir/build.make CMakeFiles/ChessAI.dir/move.cpp.o.provides.build
.PHONY : CMakeFiles/ChessAI.dir/move.cpp.o.provides

CMakeFiles/ChessAI.dir/move.cpp.o.provides.build: CMakeFiles/ChessAI.dir/move.cpp.o


CMakeFiles/ChessAI.dir/square.cpp.o: CMakeFiles/ChessAI.dir/flags.make
CMakeFiles/ChessAI.dir/square.cpp.o: ../square.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ChessAI.dir/square.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChessAI.dir/square.cpp.o -c "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/square.cpp"

CMakeFiles/ChessAI.dir/square.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChessAI.dir/square.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/square.cpp" > CMakeFiles/ChessAI.dir/square.cpp.i

CMakeFiles/ChessAI.dir/square.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChessAI.dir/square.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/square.cpp" -o CMakeFiles/ChessAI.dir/square.cpp.s

CMakeFiles/ChessAI.dir/square.cpp.o.requires:

.PHONY : CMakeFiles/ChessAI.dir/square.cpp.o.requires

CMakeFiles/ChessAI.dir/square.cpp.o.provides: CMakeFiles/ChessAI.dir/square.cpp.o.requires
	$(MAKE) -f CMakeFiles/ChessAI.dir/build.make CMakeFiles/ChessAI.dir/square.cpp.o.provides.build
.PHONY : CMakeFiles/ChessAI.dir/square.cpp.o.provides

CMakeFiles/ChessAI.dir/square.cpp.o.provides.build: CMakeFiles/ChessAI.dir/square.cpp.o


# Object files for target ChessAI
ChessAI_OBJECTS = \
"CMakeFiles/ChessAI.dir/main.cpp.o" \
"CMakeFiles/ChessAI.dir/piece.cpp.o" \
"CMakeFiles/ChessAI.dir/position.cpp.o" \
"CMakeFiles/ChessAI.dir/ui.cpp.o" \
"CMakeFiles/ChessAI.dir/move.cpp.o" \
"CMakeFiles/ChessAI.dir/square.cpp.o"

# External object files for target ChessAI
ChessAI_EXTERNAL_OBJECTS =

ChessAI: CMakeFiles/ChessAI.dir/main.cpp.o
ChessAI: CMakeFiles/ChessAI.dir/piece.cpp.o
ChessAI: CMakeFiles/ChessAI.dir/position.cpp.o
ChessAI: CMakeFiles/ChessAI.dir/ui.cpp.o
ChessAI: CMakeFiles/ChessAI.dir/move.cpp.o
ChessAI: CMakeFiles/ChessAI.dir/square.cpp.o
ChessAI: CMakeFiles/ChessAI.dir/build.make
ChessAI: CMakeFiles/ChessAI.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable ChessAI"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ChessAI.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ChessAI.dir/build: ChessAI

.PHONY : CMakeFiles/ChessAI.dir/build

CMakeFiles/ChessAI.dir/requires: CMakeFiles/ChessAI.dir/main.cpp.o.requires
CMakeFiles/ChessAI.dir/requires: CMakeFiles/ChessAI.dir/piece.cpp.o.requires
CMakeFiles/ChessAI.dir/requires: CMakeFiles/ChessAI.dir/position.cpp.o.requires
CMakeFiles/ChessAI.dir/requires: CMakeFiles/ChessAI.dir/ui.cpp.o.requires
CMakeFiles/ChessAI.dir/requires: CMakeFiles/ChessAI.dir/move.cpp.o.requires
CMakeFiles/ChessAI.dir/requires: CMakeFiles/ChessAI.dir/square.cpp.o.requires

.PHONY : CMakeFiles/ChessAI.dir/requires

CMakeFiles/ChessAI.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ChessAI.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ChessAI.dir/clean

CMakeFiles/ChessAI.dir/depend:
	cd "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI" "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI" "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/cmake-build-debug" "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/cmake-build-debug" "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/ChessAI/cmake-build-debug/CMakeFiles/ChessAI.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ChessAI.dir/depend

