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
CMAKE_SOURCE_DIR = E:\coding\8\8.4\3-bool

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\coding\8\8.4\3-bool\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/3_bool.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/3_bool.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3_bool.dir/flags.make

CMakeFiles/3_bool.dir/main.cpp.obj: CMakeFiles/3_bool.dir/flags.make
CMakeFiles/3_bool.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\coding\8\8.4\3-bool\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/3_bool.dir/main.cpp.obj"
	E:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\3_bool.dir\main.cpp.obj -c E:\coding\8\8.4\3-bool\main.cpp

CMakeFiles/3_bool.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3_bool.dir/main.cpp.i"
	E:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\coding\8\8.4\3-bool\main.cpp > CMakeFiles\3_bool.dir\main.cpp.i

CMakeFiles/3_bool.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3_bool.dir/main.cpp.s"
	E:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\coding\8\8.4\3-bool\main.cpp -o CMakeFiles\3_bool.dir\main.cpp.s

# Object files for target 3_bool
3_bool_OBJECTS = \
"CMakeFiles/3_bool.dir/main.cpp.obj"

# External object files for target 3_bool
3_bool_EXTERNAL_OBJECTS =

3_bool.exe: CMakeFiles/3_bool.dir/main.cpp.obj
3_bool.exe: CMakeFiles/3_bool.dir/build.make
3_bool.exe: CMakeFiles/3_bool.dir/linklibs.rsp
3_bool.exe: CMakeFiles/3_bool.dir/objects1.rsp
3_bool.exe: CMakeFiles/3_bool.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\coding\8\8.4\3-bool\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 3_bool.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\3_bool.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3_bool.dir/build: 3_bool.exe

.PHONY : CMakeFiles/3_bool.dir/build

CMakeFiles/3_bool.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\3_bool.dir\cmake_clean.cmake
.PHONY : CMakeFiles/3_bool.dir/clean

CMakeFiles/3_bool.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\coding\8\8.4\3-bool E:\coding\8\8.4\3-bool E:\coding\8\8.4\3-bool\cmake-build-debug E:\coding\8\8.4\3-bool\cmake-build-debug E:\coding\8\8.4\3-bool\cmake-build-debug\CMakeFiles\3_bool.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/3_bool.dir/depend
