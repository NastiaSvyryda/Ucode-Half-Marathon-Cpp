# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nastiamac/Desktop/marathon/t05

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nastiamac/Desktop/marathon/t05/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/t05.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/t05.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/t05.dir/flags.make

CMakeFiles/t05.dir/main.cpp.o: CMakeFiles/t05.dir/flags.make
CMakeFiles/t05.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nastiamac/Desktop/marathon/t05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/t05.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/t05.dir/main.cpp.o -c /Users/nastiamac/Desktop/marathon/t05/main.cpp

CMakeFiles/t05.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/t05.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nastiamac/Desktop/marathon/t05/main.cpp > CMakeFiles/t05.dir/main.cpp.i

CMakeFiles/t05.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/t05.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nastiamac/Desktop/marathon/t05/main.cpp -o CMakeFiles/t05.dir/main.cpp.s

# Object files for target t05
t05_OBJECTS = \
"CMakeFiles/t05.dir/main.cpp.o"

# External object files for target t05
t05_EXTERNAL_OBJECTS =

t05: CMakeFiles/t05.dir/main.cpp.o
t05: CMakeFiles/t05.dir/build.make
t05: CMakeFiles/t05.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nastiamac/Desktop/marathon/t05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable t05"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/t05.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/t05.dir/build: t05

.PHONY : CMakeFiles/t05.dir/build

CMakeFiles/t05.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/t05.dir/cmake_clean.cmake
.PHONY : CMakeFiles/t05.dir/clean

CMakeFiles/t05.dir/depend:
	cd /Users/nastiamac/Desktop/marathon/t05/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nastiamac/Desktop/marathon/t05 /Users/nastiamac/Desktop/marathon/t05 /Users/nastiamac/Desktop/marathon/t05/cmake-build-debug /Users/nastiamac/Desktop/marathon/t05/cmake-build-debug /Users/nastiamac/Desktop/marathon/t05/cmake-build-debug/CMakeFiles/t05.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/t05.dir/depend

