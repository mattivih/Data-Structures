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
CMAKE_SOURCE_DIR = "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab06"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab06/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/lab06.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab06.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab06.dir/flags.make

CMakeFiles/lab06.dir/dynlist.cpp.o: CMakeFiles/lab06.dir/flags.make
CMakeFiles/lab06.dir/dynlist.cpp.o: ../dynlist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab06/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab06.dir/dynlist.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab06.dir/dynlist.cpp.o -c "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab06/dynlist.cpp"

CMakeFiles/lab06.dir/dynlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab06.dir/dynlist.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab06/dynlist.cpp" > CMakeFiles/lab06.dir/dynlist.cpp.i

CMakeFiles/lab06.dir/dynlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab06.dir/dynlist.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab06/dynlist.cpp" -o CMakeFiles/lab06.dir/dynlist.cpp.s

CMakeFiles/lab06.dir/dynlist.cpp.o.requires:

.PHONY : CMakeFiles/lab06.dir/dynlist.cpp.o.requires

CMakeFiles/lab06.dir/dynlist.cpp.o.provides: CMakeFiles/lab06.dir/dynlist.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab06.dir/build.make CMakeFiles/lab06.dir/dynlist.cpp.o.provides.build
.PHONY : CMakeFiles/lab06.dir/dynlist.cpp.o.provides

CMakeFiles/lab06.dir/dynlist.cpp.o.provides.build: CMakeFiles/lab06.dir/dynlist.cpp.o


# Object files for target lab06
lab06_OBJECTS = \
"CMakeFiles/lab06.dir/dynlist.cpp.o"

# External object files for target lab06
lab06_EXTERNAL_OBJECTS =

lab06: CMakeFiles/lab06.dir/dynlist.cpp.o
lab06: CMakeFiles/lab06.dir/build.make
lab06: CMakeFiles/lab06.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab06/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab06"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab06.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab06.dir/build: lab06

.PHONY : CMakeFiles/lab06.dir/build

CMakeFiles/lab06.dir/requires: CMakeFiles/lab06.dir/dynlist.cpp.o.requires

.PHONY : CMakeFiles/lab06.dir/requires

CMakeFiles/lab06.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab06.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab06.dir/clean

CMakeFiles/lab06.dir/depend:
	cd "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab06/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab06" "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab06" "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab06/cmake-build-debug" "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab06/cmake-build-debug" "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab06/cmake-build-debug/CMakeFiles/lab06.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lab06.dir/depend
