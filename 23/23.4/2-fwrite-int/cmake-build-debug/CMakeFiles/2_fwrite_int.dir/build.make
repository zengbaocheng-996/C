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
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Administrator\Desktop\C\23\23.4\2-fwrite-int

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Administrator\Desktop\C\23\23.4\2-fwrite-int\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/2_fwrite_int.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/2_fwrite_int.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2_fwrite_int.dir/flags.make

CMakeFiles/2_fwrite_int.dir/main.c.obj: CMakeFiles/2_fwrite_int.dir/flags.make
CMakeFiles/2_fwrite_int.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Administrator\Desktop\C\23\23.4\2-fwrite-int\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/2_fwrite_int.dir/main.c.obj"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\2_fwrite_int.dir\main.c.obj -c C:\Users\Administrator\Desktop\C\23\23.4\2-fwrite-int\main.c

CMakeFiles/2_fwrite_int.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/2_fwrite_int.dir/main.c.i"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Administrator\Desktop\C\23\23.4\2-fwrite-int\main.c > CMakeFiles\2_fwrite_int.dir\main.c.i

CMakeFiles/2_fwrite_int.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/2_fwrite_int.dir/main.c.s"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Administrator\Desktop\C\23\23.4\2-fwrite-int\main.c -o CMakeFiles\2_fwrite_int.dir\main.c.s

# Object files for target 2_fwrite_int
2_fwrite_int_OBJECTS = \
"CMakeFiles/2_fwrite_int.dir/main.c.obj"

# External object files for target 2_fwrite_int
2_fwrite_int_EXTERNAL_OBJECTS =

2_fwrite_int.exe: CMakeFiles/2_fwrite_int.dir/main.c.obj
2_fwrite_int.exe: CMakeFiles/2_fwrite_int.dir/build.make
2_fwrite_int.exe: CMakeFiles/2_fwrite_int.dir/linklibs.rsp
2_fwrite_int.exe: CMakeFiles/2_fwrite_int.dir/objects1.rsp
2_fwrite_int.exe: CMakeFiles/2_fwrite_int.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Administrator\Desktop\C\23\23.4\2-fwrite-int\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 2_fwrite_int.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\2_fwrite_int.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2_fwrite_int.dir/build: 2_fwrite_int.exe

.PHONY : CMakeFiles/2_fwrite_int.dir/build

CMakeFiles/2_fwrite_int.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\2_fwrite_int.dir\cmake_clean.cmake
.PHONY : CMakeFiles/2_fwrite_int.dir/clean

CMakeFiles/2_fwrite_int.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Administrator\Desktop\C\23\23.4\2-fwrite-int C:\Users\Administrator\Desktop\C\23\23.4\2-fwrite-int C:\Users\Administrator\Desktop\C\23\23.4\2-fwrite-int\cmake-build-debug C:\Users\Administrator\Desktop\C\23\23.4\2-fwrite-int\cmake-build-debug C:\Users\Administrator\Desktop\C\23\23.4\2-fwrite-int\cmake-build-debug\CMakeFiles\2_fwrite_int.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/2_fwrite_int.dir/depend

