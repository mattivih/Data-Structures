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
CMAKE_SOURCE_DIR = "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab07"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab07/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/lab07.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab07.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab07.dir/flags.make

CMakeFiles/lab07.dir/main.cpp.o: CMakeFiles/lab07.dir/flags.make
CMakeFiles/lab07.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab07/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab07.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab07.dir/main.cpp.o -c "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab07/main.cpp"

CMakeFiles/lab07.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab07.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab07/main.cpp" > CMakeFiles/lab07.dir/main.cpp.i

CMakeFiles/lab07.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab07.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab07/main.cpp" -o CMakeFiles/lab07.dir/main.cpp.s

CMakeFiles/lab07.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/lab07.dir/main.cpp.o.requires

CMakeFiles/lab07.dir/main.cpp.o.provides: CMakeFiles/lab07.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab07.dir/build.make CMakeFiles/lab07.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/lab07.dir/main.cpp.o.provides

CMakeFiles/lab07.dir/main.cpp.o.provides.build: CMakeFiles/lab07.dir/main.cpp.o


# Object files for target lab07
lab07_OBJECTS = \
"CMakeFiles/lab07.dir/main.cpp.o"

# External object files for target lab07
lab07_EXTERNAL_OBJECTS =

lab07: CMakeFiles/lab07.dir/main.cpp.o
lab07: CMakeFiles/lab07.dir/build.make
lab07: CMakeFiles/lab07.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab07/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab07"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab07.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab07.dir/build: lab07

.PHONY : CMakeFiles/lab07.dir/build

CMakeFiles/lab07.dir/requires: CMakeFiles/lab07.dir/main.cpp.o.requires

.PHONY : CMakeFiles/lab07.dir/requires

CMakeFiles/lab07.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab07.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab07.dir/clean

CMakeFiles/lab07.dir/depend:
	cd "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab07/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab07" "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab07" "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab07/cmake-build-debug" "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab07/cmake-build-debug" "/Users/Matti/Desktop/Sith Empire/PELISOVELLUKSET/C++/lab07/cmake-build-debug/CMakeFiles/lab07.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lab07.dir/depend

