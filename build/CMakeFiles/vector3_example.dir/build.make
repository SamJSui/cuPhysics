# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/samue/OneDrive/cuPhysics

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/samue/OneDrive/cuPhysics/build

# Include any dependencies generated for this target.
include CMakeFiles/vector3_example.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/vector3_example.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/vector3_example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vector3_example.dir/flags.make

CMakeFiles/vector3_example.dir/examples/vector3_example.cpp.o: CMakeFiles/vector3_example.dir/flags.make
CMakeFiles/vector3_example.dir/examples/vector3_example.cpp.o: ../examples/vector3_example.cpp
CMakeFiles/vector3_example.dir/examples/vector3_example.cpp.o: CMakeFiles/vector3_example.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/samue/OneDrive/cuPhysics/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vector3_example.dir/examples/vector3_example.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vector3_example.dir/examples/vector3_example.cpp.o -MF CMakeFiles/vector3_example.dir/examples/vector3_example.cpp.o.d -o CMakeFiles/vector3_example.dir/examples/vector3_example.cpp.o -c /mnt/c/Users/samue/OneDrive/cuPhysics/examples/vector3_example.cpp

CMakeFiles/vector3_example.dir/examples/vector3_example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vector3_example.dir/examples/vector3_example.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/samue/OneDrive/cuPhysics/examples/vector3_example.cpp > CMakeFiles/vector3_example.dir/examples/vector3_example.cpp.i

CMakeFiles/vector3_example.dir/examples/vector3_example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vector3_example.dir/examples/vector3_example.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/samue/OneDrive/cuPhysics/examples/vector3_example.cpp -o CMakeFiles/vector3_example.dir/examples/vector3_example.cpp.s

# Object files for target vector3_example
vector3_example_OBJECTS = \
"CMakeFiles/vector3_example.dir/examples/vector3_example.cpp.o"

# External object files for target vector3_example
vector3_example_EXTERNAL_OBJECTS =

vector3_example: CMakeFiles/vector3_example.dir/examples/vector3_example.cpp.o
vector3_example: CMakeFiles/vector3_example.dir/build.make
vector3_example: cuphysics/cuphysics.a
vector3_example: CMakeFiles/vector3_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/samue/OneDrive/cuPhysics/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vector3_example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vector3_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vector3_example.dir/build: vector3_example
.PHONY : CMakeFiles/vector3_example.dir/build

CMakeFiles/vector3_example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vector3_example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vector3_example.dir/clean

CMakeFiles/vector3_example.dir/depend:
	cd /mnt/c/Users/samue/OneDrive/cuPhysics/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/samue/OneDrive/cuPhysics /mnt/c/Users/samue/OneDrive/cuPhysics /mnt/c/Users/samue/OneDrive/cuPhysics/build /mnt/c/Users/samue/OneDrive/cuPhysics/build /mnt/c/Users/samue/OneDrive/cuPhysics/build/CMakeFiles/vector3_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vector3_example.dir/depend

