# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /Users/ibohun/CLionProjects/42-fillit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ibohun/CLionProjects/42-fillit/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/42_Fillit.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/42_Fillit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/42_Fillit.dir/flags.make

CMakeFiles/42_Fillit.dir/main.c.o: CMakeFiles/42_Fillit.dir/flags.make
CMakeFiles/42_Fillit.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ibohun/CLionProjects/42-fillit/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/42_Fillit.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/42_Fillit.dir/main.c.o   -c /Users/ibohun/CLionProjects/42-fillit/main.c

CMakeFiles/42_Fillit.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/42_Fillit.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ibohun/CLionProjects/42-fillit/main.c > CMakeFiles/42_Fillit.dir/main.c.i

CMakeFiles/42_Fillit.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/42_Fillit.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ibohun/CLionProjects/42-fillit/main.c -o CMakeFiles/42_Fillit.dir/main.c.s

# Object files for target 42_Fillit
42_Fillit_OBJECTS = \
"CMakeFiles/42_Fillit.dir/main.c.o"

# External object files for target 42_Fillit
42_Fillit_EXTERNAL_OBJECTS =

42_Fillit: CMakeFiles/42_Fillit.dir/main.c.o
42_Fillit: CMakeFiles/42_Fillit.dir/build.make
42_Fillit: CMakeFiles/42_Fillit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ibohun/CLionProjects/42-fillit/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 42_Fillit"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/42_Fillit.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/42_Fillit.dir/build: 42_Fillit

.PHONY : CMakeFiles/42_Fillit.dir/build

CMakeFiles/42_Fillit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/42_Fillit.dir/cmake_clean.cmake
.PHONY : CMakeFiles/42_Fillit.dir/clean

CMakeFiles/42_Fillit.dir/depend:
	cd /Users/ibohun/CLionProjects/42-fillit/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ibohun/CLionProjects/42-fillit /Users/ibohun/CLionProjects/42-fillit /Users/ibohun/CLionProjects/42-fillit/cmake-build-debug /Users/ibohun/CLionProjects/42-fillit/cmake-build-debug /Users/ibohun/CLionProjects/42-fillit/cmake-build-debug/CMakeFiles/42_Fillit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/42_Fillit.dir/depend

