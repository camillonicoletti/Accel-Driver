# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build

# Include any dependencies generated for this target.
include libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/compiler_depend.make

# Include the progress variables for this target.
include libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/progress.make

# Include the compile flags for this target's objects.
include libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/flags.make

libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/QuickStart_example.cpp.o: libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/flags.make
libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/QuickStart_example.cpp.o: /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/doc/examples/QuickStart_example.cpp
libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/QuickStart_example.cpp.o: libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/QuickStart_example.cpp.o"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/eigen/doc/examples && ccache /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/QuickStart_example.cpp.o -MF CMakeFiles/QuickStart_example.dir/QuickStart_example.cpp.o.d -o CMakeFiles/QuickStart_example.dir/QuickStart_example.cpp.o -c /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/doc/examples/QuickStart_example.cpp

libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/QuickStart_example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QuickStart_example.dir/QuickStart_example.cpp.i"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/eigen/doc/examples && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/doc/examples/QuickStart_example.cpp > CMakeFiles/QuickStart_example.dir/QuickStart_example.cpp.i

libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/QuickStart_example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QuickStart_example.dir/QuickStart_example.cpp.s"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/eigen/doc/examples && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/doc/examples/QuickStart_example.cpp -o CMakeFiles/QuickStart_example.dir/QuickStart_example.cpp.s

# Object files for target QuickStart_example
QuickStart_example_OBJECTS = \
"CMakeFiles/QuickStart_example.dir/QuickStart_example.cpp.o"

# External object files for target QuickStart_example
QuickStart_example_EXTERNAL_OBJECTS =

libs/boardcore/libs/eigen/doc/examples/QuickStart_example: libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/QuickStart_example.cpp.o
libs/boardcore/libs/eigen/doc/examples/QuickStart_example: libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/build.make
libs/boardcore/libs/eigen/doc/examples/QuickStart_example: libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable QuickStart_example"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/eigen/doc/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QuickStart_example.dir/link.txt --verbose=$(VERBOSE)
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/eigen/doc/examples && QuickStart_example >/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/eigen/doc/examples/QuickStart_example.out

# Rule to build all files generated by this target.
libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/build: libs/boardcore/libs/eigen/doc/examples/QuickStart_example
.PHONY : libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/build

libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/clean:
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/eigen/doc/examples && $(CMAKE_COMMAND) -P CMakeFiles/QuickStart_example.dir/cmake_clean.cmake
.PHONY : libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/clean

libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/depend:
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/doc/examples /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/eigen/doc/examples /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : libs/boardcore/libs/eigen/doc/examples/CMakeFiles/QuickStart_example.dir/depend

