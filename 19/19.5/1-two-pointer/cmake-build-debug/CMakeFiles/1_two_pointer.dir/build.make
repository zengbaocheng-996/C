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
CMAKE_SOURCE_DIR = C:\Users\Administrator\Desktop\C\19\19.5\1-two-pointer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Administrator\Desktop\C\19\19.5\1-two-pointer\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1_two_pointer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1_two_pointer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1_two_pointer.dir/flags.make

CMakeFiles/1_two_pointer.dir/main.cpp.obj: CMakeFiles/1_two_pointer.dir/flags.make
CMakeFiles/1_two_pointer.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Administrator\Desktop\C\19\19.5\1-two-pointer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1_two_pointer.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1_two_pointer.dir\main.cpp.obj -c C:\Users\Administrator\Desktop\C\19\19.5\1-two-pointer\main.cpp

CMakeFiles/1_two_pointer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1_two_pointer.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Administrator\Desktop\C\19\19.5\1-two-pointer\main.cpp > CMakeFiles\1_two_pointer.dir\main.cpp.i

CMakeFiles/1_two_pointer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1_two_pointer.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Administrator\Desktop\C\19\19.5\1-two-pointer\main.cpp -o CMakeFiles\1_two_pointer.dir\main.cpp.s

# Object files for target 1_two_pointer
1_two_pointer_OBJECTS = \
"CMakeFiles/1_two_pointer.dir/main.cpp.obj"

# External object files for target 1_two_pointer
1_two_pointer_EXTERNAL_OBJECTS =

1_two_pointer.exe: CMakeFiles/1_two_pointer.dir/main.cpp.obj
1_two_pointer.exe: CMakeFiles/1_two_pointer.dir/build.make
1_two_pointer.exe: CMakeFiles/1_two_pointer.dir/linklibs.rsp
1_two_pointer.exe: CMakeFiles/1_two_pointer.dir/objects1.rsp
1_two_pointer.exe: CMakeFiles/1_two_pointer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Administrator\Desktop\C\19\19.5\1-two-pointer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1_two_pointer.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1_two_pointer.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1_two_pointer.dir/build: 1_two_pointer.exe

.PHONY : CMakeFiles/1_two_pointer.dir/build

CMakeFiles/1_two_pointer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1_two_pointer.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1_two_pointer.dir/clean

CMakeFiles/1_two_pointer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Administrator\Desktop\C\19\19.5\1-two-pointer C:\Users\Administrator\Desktop\C\19\19.5\1-two-pointer C:\Users\Administrator\Desktop\C\19\19.5\1-two-pointer\cmake-build-debug C:\Users\Administrator\Desktop\C\19\19.5\1-two-pointer\cmake-build-debug C:\Users\Administrator\Desktop\C\19\19.5\1-two-pointer\cmake-build-debug\CMakeFiles\1_two_pointer.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1_two_pointer.dir/depend
