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
include CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/flags.make

CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp.o: CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/flags.make
CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp.o: /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp
CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp.o: CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp.o"
	ccache /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp.o -MF CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp.o.d -o CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp.o -c /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp

CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp.i"
	/opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp > CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp.i

CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp.s"
	/opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp -o CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp.s

boot-stm32f429zi_death_stack_v2: CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/libs/boardcore/src/bsps/stm32f429zi_death_stack_v2/core/stage_1_boot.cpp.o
boot-stm32f429zi_death_stack_v2: CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/build.make
.PHONY : boot-stm32f429zi_death_stack_v2

# Rule to build all files generated by this target.
CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/build: boot-stm32f429zi_death_stack_v2
.PHONY : CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/build

CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/clean

CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/depend:
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/boot-stm32f429zi_death_stack_v2.dir/depend

