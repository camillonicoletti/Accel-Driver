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
include libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/compiler_depend.make

# Include the progress variables for this target.
include libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/progress.make

# Include the compile flags for this target's objects.
include libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/flags.make

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/delays.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/flags.make
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/delays.cpp.o: /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/interfaces/delays.cpp
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/delays.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/delays.cpp.o"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && ccache /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/delays.cpp.o -MF CMakeFiles/miosix-host.dir/interfaces/delays.cpp.o.d -o CMakeFiles/miosix-host.dir/interfaces/delays.cpp.o -c /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/interfaces/delays.cpp

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/delays.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/miosix-host.dir/interfaces/delays.cpp.i"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/interfaces/delays.cpp > CMakeFiles/miosix-host.dir/interfaces/delays.cpp.i

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/delays.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/miosix-host.dir/interfaces/delays.cpp.s"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/interfaces/delays.cpp -o CMakeFiles/miosix-host.dir/interfaces/delays.cpp.s

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/gpio.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/flags.make
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/gpio.cpp.o: /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/interfaces/gpio.cpp
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/gpio.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/gpio.cpp.o"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && ccache /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/gpio.cpp.o -MF CMakeFiles/miosix-host.dir/interfaces/gpio.cpp.o.d -o CMakeFiles/miosix-host.dir/interfaces/gpio.cpp.o -c /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/interfaces/gpio.cpp

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/gpio.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/miosix-host.dir/interfaces/gpio.cpp.i"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/interfaces/gpio.cpp > CMakeFiles/miosix-host.dir/interfaces/gpio.cpp.i

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/gpio.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/miosix-host.dir/interfaces/gpio.cpp.s"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/interfaces/gpio.cpp -o CMakeFiles/miosix-host.dir/interfaces/gpio.cpp.s

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/portability.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/flags.make
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/portability.cpp.o: /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/interfaces/portability.cpp
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/portability.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/portability.cpp.o"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && ccache /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/portability.cpp.o -MF CMakeFiles/miosix-host.dir/interfaces/portability.cpp.o.d -o CMakeFiles/miosix-host.dir/interfaces/portability.cpp.o -c /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/interfaces/portability.cpp

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/portability.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/miosix-host.dir/interfaces/portability.cpp.i"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/interfaces/portability.cpp > CMakeFiles/miosix-host.dir/interfaces/portability.cpp.i

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/portability.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/miosix-host.dir/interfaces/portability.cpp.s"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/interfaces/portability.cpp -o CMakeFiles/miosix-host.dir/interfaces/portability.cpp.s

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/scheduler/priority/priority_scheduler_types.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/flags.make
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/scheduler/priority/priority_scheduler_types.cpp.o: /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/scheduler/priority/priority_scheduler_types.cpp
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/scheduler/priority/priority_scheduler_types.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/scheduler/priority/priority_scheduler_types.cpp.o"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && ccache /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/scheduler/priority/priority_scheduler_types.cpp.o -MF CMakeFiles/miosix-host.dir/kernel/scheduler/priority/priority_scheduler_types.cpp.o.d -o CMakeFiles/miosix-host.dir/kernel/scheduler/priority/priority_scheduler_types.cpp.o -c /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/scheduler/priority/priority_scheduler_types.cpp

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/scheduler/priority/priority_scheduler_types.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/miosix-host.dir/kernel/scheduler/priority/priority_scheduler_types.cpp.i"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/scheduler/priority/priority_scheduler_types.cpp > CMakeFiles/miosix-host.dir/kernel/scheduler/priority/priority_scheduler_types.cpp.i

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/scheduler/priority/priority_scheduler_types.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/miosix-host.dir/kernel/scheduler/priority/priority_scheduler_types.cpp.s"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/scheduler/priority/priority_scheduler_types.cpp -o CMakeFiles/miosix-host.dir/kernel/scheduler/priority/priority_scheduler_types.cpp.s

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/error.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/flags.make
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/error.cpp.o: /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/error.cpp
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/error.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/error.cpp.o"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && ccache /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/error.cpp.o -MF CMakeFiles/miosix-host.dir/kernel/error.cpp.o.d -o CMakeFiles/miosix-host.dir/kernel/error.cpp.o -c /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/error.cpp

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/error.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/miosix-host.dir/kernel/error.cpp.i"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/error.cpp > CMakeFiles/miosix-host.dir/kernel/error.cpp.i

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/error.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/miosix-host.dir/kernel/error.cpp.s"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/error.cpp -o CMakeFiles/miosix-host.dir/kernel/error.cpp.s

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/kernel.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/flags.make
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/kernel.cpp.o: /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/kernel.cpp
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/kernel.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/kernel.cpp.o"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && ccache /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/kernel.cpp.o -MF CMakeFiles/miosix-host.dir/kernel/kernel.cpp.o.d -o CMakeFiles/miosix-host.dir/kernel/kernel.cpp.o -c /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/kernel.cpp

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/kernel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/miosix-host.dir/kernel/kernel.cpp.i"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/kernel.cpp > CMakeFiles/miosix-host.dir/kernel/kernel.cpp.i

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/kernel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/miosix-host.dir/kernel/kernel.cpp.s"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/kernel.cpp -o CMakeFiles/miosix-host.dir/kernel/kernel.cpp.s

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/sync.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/flags.make
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/sync.cpp.o: /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/sync.cpp
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/sync.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/sync.cpp.o"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && ccache /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/sync.cpp.o -MF CMakeFiles/miosix-host.dir/kernel/sync.cpp.o.d -o CMakeFiles/miosix-host.dir/kernel/sync.cpp.o -c /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/sync.cpp

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/sync.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/miosix-host.dir/kernel/sync.cpp.i"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/sync.cpp > CMakeFiles/miosix-host.dir/kernel/sync.cpp.i

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/sync.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/miosix-host.dir/kernel/sync.cpp.s"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/kernel/sync.cpp -o CMakeFiles/miosix-host.dir/kernel/sync.cpp.s

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/util.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/flags.make
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/util.cpp.o: /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/util/util.cpp
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/util.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/util.cpp.o"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && ccache /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/util.cpp.o -MF CMakeFiles/miosix-host.dir/util/util.cpp.o.d -o CMakeFiles/miosix-host.dir/util/util.cpp.o -c /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/util/util.cpp

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/miosix-host.dir/util/util.cpp.i"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/util/util.cpp > CMakeFiles/miosix-host.dir/util/util.cpp.i

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/miosix-host.dir/util/util.cpp.s"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/util/util.cpp -o CMakeFiles/miosix-host.dir/util/util.cpp.s

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/version.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/flags.make
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/version.cpp.o: /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/util/version.cpp
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/version.cpp.o: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/version.cpp.o"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && ccache /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/version.cpp.o -MF CMakeFiles/miosix-host.dir/util/version.cpp.o.d -o CMakeFiles/miosix-host.dir/util/version.cpp.o -c /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/util/version.cpp

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/version.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/miosix-host.dir/util/version.cpp.i"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/util/version.cpp > CMakeFiles/miosix-host.dir/util/version.cpp.i

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/version.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/miosix-host.dir/util/version.cpp.s"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && /opt/arm-miosix-eabi/bin/arm-miosix-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host/util/version.cpp -o CMakeFiles/miosix-host.dir/util/version.cpp.s

# Object files for target miosix-host
miosix__host_OBJECTS = \
"CMakeFiles/miosix-host.dir/interfaces/delays.cpp.o" \
"CMakeFiles/miosix-host.dir/interfaces/gpio.cpp.o" \
"CMakeFiles/miosix-host.dir/interfaces/portability.cpp.o" \
"CMakeFiles/miosix-host.dir/kernel/scheduler/priority/priority_scheduler_types.cpp.o" \
"CMakeFiles/miosix-host.dir/kernel/error.cpp.o" \
"CMakeFiles/miosix-host.dir/kernel/kernel.cpp.o" \
"CMakeFiles/miosix-host.dir/kernel/sync.cpp.o" \
"CMakeFiles/miosix-host.dir/util/util.cpp.o" \
"CMakeFiles/miosix-host.dir/util/version.cpp.o"

# External object files for target miosix-host
miosix__host_EXTERNAL_OBJECTS =

libs/boardcore/libs/miosix-host/libmiosix-host.a: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/delays.cpp.o
libs/boardcore/libs/miosix-host/libmiosix-host.a: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/gpio.cpp.o
libs/boardcore/libs/miosix-host/libmiosix-host.a: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/interfaces/portability.cpp.o
libs/boardcore/libs/miosix-host/libmiosix-host.a: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/scheduler/priority/priority_scheduler_types.cpp.o
libs/boardcore/libs/miosix-host/libmiosix-host.a: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/error.cpp.o
libs/boardcore/libs/miosix-host/libmiosix-host.a: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/kernel.cpp.o
libs/boardcore/libs/miosix-host/libmiosix-host.a: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/kernel/sync.cpp.o
libs/boardcore/libs/miosix-host/libmiosix-host.a: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/util.cpp.o
libs/boardcore/libs/miosix-host/libmiosix-host.a: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/util/version.cpp.o
libs/boardcore/libs/miosix-host/libmiosix-host.a: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/build.make
libs/boardcore/libs/miosix-host/libmiosix-host.a: libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX static library libmiosix-host.a"
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && $(CMAKE_COMMAND) -P CMakeFiles/miosix-host.dir/cmake_clean_target.cmake
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/miosix-host.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/build: libs/boardcore/libs/miosix-host/libmiosix-host.a
.PHONY : libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/build

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/clean:
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host && $(CMAKE_COMMAND) -P CMakeFiles/miosix-host.dir/cmake_clean.cmake
.PHONY : libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/clean

libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/depend:
	cd /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/miosix-host /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : libs/boardcore/libs/miosix-host/CMakeFiles/miosix-host.dir/depend

