# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_SOURCE_DIR = /home/zhenyu/project/resonance

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zhenyu/project/resonance/build

# Include any dependencies generated for this target.
include bin/resonance/CMakeFiles/resonance.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include bin/resonance/CMakeFiles/resonance.dir/compiler_depend.make

# Include the progress variables for this target.
include bin/resonance/CMakeFiles/resonance.dir/progress.make

# Include the compile flags for this target's objects.
include bin/resonance/CMakeFiles/resonance.dir/flags.make

bin/resonance/message.pb.h: ../src/resonance/message.proto
bin/resonance/message.pb.h: /usr/sbin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/zhenyu/project/resonance/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running cpp protocol buffer compiler on message.proto"
	cd /home/zhenyu/project/resonance/build/bin/resonance && /usr/sbin/protoc --cpp_out /home/zhenyu/project/resonance/build/bin/resonance -I /home/zhenyu/project/resonance/src/resonance /home/zhenyu/project/resonance/src/resonance/message.proto

bin/resonance/message.pb.cc: bin/resonance/message.pb.h
	@$(CMAKE_COMMAND) -E touch_nocreate bin/resonance/message.pb.cc

bin/resonance/CMakeFiles/resonance.dir/main.cpp.o: bin/resonance/CMakeFiles/resonance.dir/flags.make
bin/resonance/CMakeFiles/resonance.dir/main.cpp.o: ../src/resonance/main.cpp
bin/resonance/CMakeFiles/resonance.dir/main.cpp.o: bin/resonance/CMakeFiles/resonance.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhenyu/project/resonance/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object bin/resonance/CMakeFiles/resonance.dir/main.cpp.o"
	cd /home/zhenyu/project/resonance/build/bin/resonance && /usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT bin/resonance/CMakeFiles/resonance.dir/main.cpp.o -MF CMakeFiles/resonance.dir/main.cpp.o.d -o CMakeFiles/resonance.dir/main.cpp.o -c /home/zhenyu/project/resonance/src/resonance/main.cpp

bin/resonance/CMakeFiles/resonance.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/resonance.dir/main.cpp.i"
	cd /home/zhenyu/project/resonance/build/bin/resonance && /usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhenyu/project/resonance/src/resonance/main.cpp > CMakeFiles/resonance.dir/main.cpp.i

bin/resonance/CMakeFiles/resonance.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/resonance.dir/main.cpp.s"
	cd /home/zhenyu/project/resonance/build/bin/resonance && /usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhenyu/project/resonance/src/resonance/main.cpp -o CMakeFiles/resonance.dir/main.cpp.s

bin/resonance/CMakeFiles/resonance.dir/message.pb.cc.o: bin/resonance/CMakeFiles/resonance.dir/flags.make
bin/resonance/CMakeFiles/resonance.dir/message.pb.cc.o: bin/resonance/message.pb.cc
bin/resonance/CMakeFiles/resonance.dir/message.pb.cc.o: bin/resonance/CMakeFiles/resonance.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhenyu/project/resonance/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object bin/resonance/CMakeFiles/resonance.dir/message.pb.cc.o"
	cd /home/zhenyu/project/resonance/build/bin/resonance && /usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT bin/resonance/CMakeFiles/resonance.dir/message.pb.cc.o -MF CMakeFiles/resonance.dir/message.pb.cc.o.d -o CMakeFiles/resonance.dir/message.pb.cc.o -c /home/zhenyu/project/resonance/build/bin/resonance/message.pb.cc

bin/resonance/CMakeFiles/resonance.dir/message.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/resonance.dir/message.pb.cc.i"
	cd /home/zhenyu/project/resonance/build/bin/resonance && /usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhenyu/project/resonance/build/bin/resonance/message.pb.cc > CMakeFiles/resonance.dir/message.pb.cc.i

bin/resonance/CMakeFiles/resonance.dir/message.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/resonance.dir/message.pb.cc.s"
	cd /home/zhenyu/project/resonance/build/bin/resonance && /usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhenyu/project/resonance/build/bin/resonance/message.pb.cc -o CMakeFiles/resonance.dir/message.pb.cc.s

# Object files for target resonance
resonance_OBJECTS = \
"CMakeFiles/resonance.dir/main.cpp.o" \
"CMakeFiles/resonance.dir/message.pb.cc.o"

# External object files for target resonance
resonance_EXTERNAL_OBJECTS =

bin/resonance/resonance: bin/resonance/CMakeFiles/resonance.dir/main.cpp.o
bin/resonance/resonance: bin/resonance/CMakeFiles/resonance.dir/message.pb.cc.o
bin/resonance/resonance: bin/resonance/CMakeFiles/resonance.dir/build.make
bin/resonance/resonance: bin/lib1/liblib1.a
bin/resonance/resonance: /usr/lib/libprotobuf.so
bin/resonance/resonance: bin/resonance/CMakeFiles/resonance.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zhenyu/project/resonance/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable resonance"
	cd /home/zhenyu/project/resonance/build/bin/resonance && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/resonance.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
bin/resonance/CMakeFiles/resonance.dir/build: bin/resonance/resonance
.PHONY : bin/resonance/CMakeFiles/resonance.dir/build

bin/resonance/CMakeFiles/resonance.dir/clean:
	cd /home/zhenyu/project/resonance/build/bin/resonance && $(CMAKE_COMMAND) -P CMakeFiles/resonance.dir/cmake_clean.cmake
.PHONY : bin/resonance/CMakeFiles/resonance.dir/clean

bin/resonance/CMakeFiles/resonance.dir/depend: bin/resonance/message.pb.cc
bin/resonance/CMakeFiles/resonance.dir/depend: bin/resonance/message.pb.h
	cd /home/zhenyu/project/resonance/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zhenyu/project/resonance /home/zhenyu/project/resonance/src/resonance /home/zhenyu/project/resonance/build /home/zhenyu/project/resonance/build/bin/resonance /home/zhenyu/project/resonance/build/bin/resonance/CMakeFiles/resonance.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : bin/resonance/CMakeFiles/resonance.dir/depend

