# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.18.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.18.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nastiamac/Desktop/marathon/t02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nastiamac/Desktop/marathon/t02/build

# Include any dependencies generated for this target.
include CMakeFiles/t02.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/t02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/t02.dir/flags.make

CMakeFiles/t02.dir/main.cpp.o: CMakeFiles/t02.dir/flags.make
CMakeFiles/t02.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nastiamac/Desktop/marathon/t02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/t02.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/t02.dir/main.cpp.o -c /Users/nastiamac/Desktop/marathon/t02/main.cpp

CMakeFiles/t02.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/t02.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nastiamac/Desktop/marathon/t02/main.cpp > CMakeFiles/t02.dir/main.cpp.i

CMakeFiles/t02.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/t02.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nastiamac/Desktop/marathon/t02/main.cpp -o CMakeFiles/t02.dir/main.cpp.s

CMakeFiles/t02.dir/walletManager.cpp.o: CMakeFiles/t02.dir/flags.make
CMakeFiles/t02.dir/walletManager.cpp.o: ../walletManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nastiamac/Desktop/marathon/t02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/t02.dir/walletManager.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/t02.dir/walletManager.cpp.o -c /Users/nastiamac/Desktop/marathon/t02/walletManager.cpp

CMakeFiles/t02.dir/walletManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/t02.dir/walletManager.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nastiamac/Desktop/marathon/t02/walletManager.cpp > CMakeFiles/t02.dir/walletManager.cpp.i

CMakeFiles/t02.dir/walletManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/t02.dir/walletManager.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nastiamac/Desktop/marathon/t02/walletManager.cpp -o CMakeFiles/t02.dir/walletManager.cpp.s

# Object files for target t02
t02_OBJECTS = \
"CMakeFiles/t02.dir/main.cpp.o" \
"CMakeFiles/t02.dir/walletManager.cpp.o"

# External object files for target t02
t02_EXTERNAL_OBJECTS =

t02: CMakeFiles/t02.dir/main.cpp.o
t02: CMakeFiles/t02.dir/walletManager.cpp.o
t02: CMakeFiles/t02.dir/build.make
t02: CMakeFiles/t02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nastiamac/Desktop/marathon/t02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable t02"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/t02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/t02.dir/build: t02

.PHONY : CMakeFiles/t02.dir/build

CMakeFiles/t02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/t02.dir/cmake_clean.cmake
.PHONY : CMakeFiles/t02.dir/clean

CMakeFiles/t02.dir/depend:
	cd /Users/nastiamac/Desktop/marathon/t02/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nastiamac/Desktop/marathon/t02 /Users/nastiamac/Desktop/marathon/t02 /Users/nastiamac/Desktop/marathon/t02/build /Users/nastiamac/Desktop/marathon/t02/build /Users/nastiamac/Desktop/marathon/t02/build/CMakeFiles/t02.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/t02.dir/depend

