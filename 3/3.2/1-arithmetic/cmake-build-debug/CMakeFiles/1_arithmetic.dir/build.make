# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\coding\3\3.2\1-arithmetic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\coding\3\3.2\1-arithmetic\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1_arithmetic.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1_arithmetic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1_arithmetic.dir/flags.make

CMakeFiles/1_arithmetic.dir/main.c.obj: CMakeFiles/1_arithmetic.dir/flags.make
CMakeFiles/1_arithmetic.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\coding\3\3.2\1-arithmetic\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/1_arithmetic.dir/main.c.obj"
	E:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\1_arithmetic.dir\main.c.obj -c E:\coding\3\3.2\1-arithmetic\main.c

CMakeFiles/1_arithmetic.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/1_arithmetic.dir/main.c.i"
	E:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\coding\3\3.2\1-arithmetic\main.c > CMakeFiles\1_arithmetic.dir\main.c.i

CMakeFiles/1_arithmetic.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/1_arithmetic.dir/main.c.s"
	E:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\coding\3\3.2\1-arithmetic\main.c -o CMakeFiles\1_arithmetic.dir\main.c.s

# Object files for target 1_arithmetic
1_arithmetic_OBJECTS = \
"CMakeFiles/1_arithmetic.dir/main.c.obj"

# External object files for target 1_arithmetic
1_arithmetic_EXTERNAL_OBJECTS =

1_arithmetic.exe: CMakeFiles/1_arithmetic.dir/main.c.obj
1_arithmetic.exe: CMakeFiles/1_arithmetic.dir/build.make
1_arithmetic.exe: CMakeFiles/1_arithmetic.dir/linklibs.rsp
1_arithmetic.exe: CMakeFiles/1_arithmetic.dir/objects1.rsp
1_arithmetic.exe: CMakeFiles/1_arithmetic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\coding\3\3.2\1-arithmetic\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 1_arithmetic.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1_arithmetic.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1_arithmetic.dir/build: 1_arithmetic.exe

.PHONY : CMakeFiles/1_arithmetic.dir/build

CMakeFiles/1_arithmetic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1_arithmetic.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1_arithmetic.dir/clean

CMakeFiles/1_arithmetic.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\coding\3\3.2\1-arithmetic E:\coding\3\3.2\1-arithmetic E:\coding\3\3.2\1-arithmetic\cmake-build-debug E:\coding\3\3.2\1-arithmetic\cmake-build-debug E:\coding\3\3.2\1-arithmetic\cmake-build-debug\CMakeFiles\1_arithmetic.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1_arithmetic.dir/depend

