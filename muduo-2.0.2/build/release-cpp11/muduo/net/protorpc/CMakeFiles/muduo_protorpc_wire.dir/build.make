# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/asuiiiyi/Repository/TinyRPC/muduo-2.0.2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11

# Include any dependencies generated for this target.
include muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/depend.make

# Include the progress variables for this target.
include muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/progress.make

# Include the compile flags for this target's objects.
include muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/flags.make

muduo/net/protorpc/rpc.pb.cc: /home/asuiiiyi/Repository/TinyRPC/muduo-2.0.2/muduo/net/protorpc/rpc.proto
	$(CMAKE_COMMAND) -E cmake_progress_report /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating rpc.pb.cc, rpc.pb.h"
	cd /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/muduo/net/protorpc && protoc --cpp_out . /home/asuiiiyi/Repository/TinyRPC/muduo-2.0.2/muduo/net/protorpc/rpc.proto -I/home/asuiiiyi/Repository/TinyRPC/muduo-2.0.2/muduo/net/protorpc

muduo/net/protorpc/rpc.pb.h: muduo/net/protorpc/rpc.pb.cc

muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.o: muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/flags.make
muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.o: muduo/net/protorpc/rpc.pb.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.o"
	cd /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/muduo/net/protorpc && /opt/rh/devtoolset-7/root/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -Wno-conversion -o CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.o -c /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/muduo/net/protorpc/rpc.pb.cc

muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.i"
	cd /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/muduo/net/protorpc && /opt/rh/devtoolset-7/root/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -Wno-conversion -E /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/muduo/net/protorpc/rpc.pb.cc > CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.i

muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.s"
	cd /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/muduo/net/protorpc && /opt/rh/devtoolset-7/root/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -Wno-conversion -S /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/muduo/net/protorpc/rpc.pb.cc -o CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.s

muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.o.requires:
.PHONY : muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.o.requires

muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.o.provides: muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.o.requires
	$(MAKE) -f muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/build.make muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.o.provides.build
.PHONY : muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.o.provides

muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.o.provides.build: muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.o

muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.o: muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/flags.make
muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.o: /home/asuiiiyi/Repository/TinyRPC/muduo-2.0.2/muduo/net/protorpc/RpcCodec.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.o"
	cd /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/muduo/net/protorpc && /opt/rh/devtoolset-7/root/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.o -c /home/asuiiiyi/Repository/TinyRPC/muduo-2.0.2/muduo/net/protorpc/RpcCodec.cc

muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.i"
	cd /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/muduo/net/protorpc && /opt/rh/devtoolset-7/root/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/asuiiiyi/Repository/TinyRPC/muduo-2.0.2/muduo/net/protorpc/RpcCodec.cc > CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.i

muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.s"
	cd /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/muduo/net/protorpc && /opt/rh/devtoolset-7/root/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/asuiiiyi/Repository/TinyRPC/muduo-2.0.2/muduo/net/protorpc/RpcCodec.cc -o CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.s

muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.o.requires:
.PHONY : muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.o.requires

muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.o.provides: muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.o.requires
	$(MAKE) -f muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/build.make muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.o.provides.build
.PHONY : muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.o.provides

muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.o.provides.build: muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.o

# Object files for target muduo_protorpc_wire
muduo_protorpc_wire_OBJECTS = \
"CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.o" \
"CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.o"

# External object files for target muduo_protorpc_wire
muduo_protorpc_wire_EXTERNAL_OBJECTS =

lib/libmuduo_protorpc_wire.a: muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.o
lib/libmuduo_protorpc_wire.a: muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.o
lib/libmuduo_protorpc_wire.a: muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/build.make
lib/libmuduo_protorpc_wire.a: muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../../../lib/libmuduo_protorpc_wire.a"
	cd /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/muduo/net/protorpc && $(CMAKE_COMMAND) -P CMakeFiles/muduo_protorpc_wire.dir/cmake_clean_target.cmake
	cd /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/muduo/net/protorpc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/muduo_protorpc_wire.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/build: lib/libmuduo_protorpc_wire.a
.PHONY : muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/build

muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/requires: muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/rpc.pb.cc.o.requires
muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/requires: muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/RpcCodec.cc.o.requires
.PHONY : muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/requires

muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/clean:
	cd /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/muduo/net/protorpc && $(CMAKE_COMMAND) -P CMakeFiles/muduo_protorpc_wire.dir/cmake_clean.cmake
.PHONY : muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/clean

muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/depend: muduo/net/protorpc/rpc.pb.cc
muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/depend: muduo/net/protorpc/rpc.pb.h
	cd /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/asuiiiyi/Repository/TinyRPC/muduo-2.0.2 /home/asuiiiyi/Repository/TinyRPC/muduo-2.0.2/muduo/net/protorpc /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11 /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/muduo/net/protorpc /home/asuiiiyi/Repository/TinyRPC/build/release-cpp11/muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : muduo/net/protorpc/CMakeFiles/muduo_protorpc_wire.dir/depend

