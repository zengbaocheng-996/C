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
CMAKE_SOURCE_DIR = C:\Users\Administrator\Desktop\C\17\17.6\1-test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Administrator\Desktop\C\17\17.6\1-test\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1_test.dir/flags.make

CMakeFiles/1_test.dir/main.cpp.obj: CMakeFiles/1_test.dir/flags.make
CMakeFiles/1_test.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Administrator\Desktop\C\17\17.6\1-test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1_test.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1_test.dir\main.cpp.obj -c C:\Users\Administrator\Desktop\C\17\17.6\1-test\main.cpp

CMakeFiles/1_test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1_test.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Administrator\Desktop\C\17\17.6\1-test\main.cpp > CMakeFiles\1_test.dir\main.cpp.i

CMakeFiles/1_test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1_test.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Administrator\Desktop\C\17\17.6\1-test\main.cpp -o CMakeFiles\1_test.dir\main.cpp.s

# Object files for target 1_test
1_test_OBJECTS = \
"CMakeFiles/1_test.dir/main.cpp.obj"

# External object files for target 1_test
1_test_EXTERNAL_OBJECTS =

1_test.exe: CMakeFiles/1_test.dir/main.cpp.obj
1_test.exe: CMakeFiles/1_test.dir/build.make
1_test.exe: CMakeFiles/1_test.dir/linklibs.rsp
1_test.exe: CMakeFiles/1_test.dir/objects1.rsp
1_test.exe: CMakeFiles/1_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Administrator\Desktop\C\17\17.6\1-test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1_test.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1_test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1_test.dir/build: 1_test.exe

.PHONY : CMakeFiles/1_test.dir/build

CMakeFiles/1_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1_test.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1_test.dir/clean

CMakeFiles/1_test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Administrator\Desktop\C\17\17.6\1-test C:\Users\Administrator\Desktop\C\17\17.6\1-test C:\Users\Administrator\Desktop\C\17\17.6\1-test\cmake-build-debug C:\Users\Administrator\Desktop\C\17\17.6\1-test\cmake-build-debug C:\Users\Administrator\Desktop\C\17\17.6\1-test\cmake-build-debug\CMakeFiles\1_test.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1_test.dir/depend

