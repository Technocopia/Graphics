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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hpham/the-technocopia-project/third-party/free-cad

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hpham/the-technocopia-project/third-party/free-cad-build

# Include any dependencies generated for this target.
include src/Main/CMakeFiles/FreeCADMainCmd.dir/depend.make

# Include the progress variables for this target.
include src/Main/CMakeFiles/FreeCADMainCmd.dir/progress.make

# Include the compile flags for this target's objects.
include src/Main/CMakeFiles/FreeCADMainCmd.dir/flags.make

src/Main/CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.o: src/Main/CMakeFiles/FreeCADMainCmd.dir/flags.make
src/Main/CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.o: /home/hpham/the-technocopia-project/third-party/free-cad/src/Main/MainCmd.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hpham/the-technocopia-project/third-party/free-cad-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/Main/CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.o"
	cd /home/hpham/the-technocopia-project/third-party/free-cad-build/src/Main && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.o -c /home/hpham/the-technocopia-project/third-party/free-cad/src/Main/MainCmd.cpp

src/Main/CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.i"
	cd /home/hpham/the-technocopia-project/third-party/free-cad-build/src/Main && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hpham/the-technocopia-project/third-party/free-cad/src/Main/MainCmd.cpp > CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.i

src/Main/CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.s"
	cd /home/hpham/the-technocopia-project/third-party/free-cad-build/src/Main && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hpham/the-technocopia-project/third-party/free-cad/src/Main/MainCmd.cpp -o CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.s

src/Main/CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.o.requires:
.PHONY : src/Main/CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.o.requires

src/Main/CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.o.provides: src/Main/CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.o.requires
	$(MAKE) -f src/Main/CMakeFiles/FreeCADMainCmd.dir/build.make src/Main/CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.o.provides.build
.PHONY : src/Main/CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.o.provides

src/Main/CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.o.provides.build: src/Main/CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.o

# Object files for target FreeCADMainCmd
FreeCADMainCmd_OBJECTS = \
"CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.o"

# External object files for target FreeCADMainCmd
FreeCADMainCmd_EXTERNAL_OBJECTS =

bin/FreeCADCmd: src/Main/CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.o
bin/FreeCADCmd: src/Main/CMakeFiles/FreeCADMainCmd.dir/build.make
bin/FreeCADCmd: lib/libFreeCADApp.so
bin/FreeCADCmd: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
bin/FreeCADCmd: /usr/lib/x86_64-linux-gnu/libQtSvg.so
bin/FreeCADCmd: /usr/lib/x86_64-linux-gnu/libQtUiTools.a
bin/FreeCADCmd: /usr/lib/x86_64-linux-gnu/libQtWebKit.so
bin/FreeCADCmd: /usr/lib/x86_64-linux-gnu/libQtXmlPatterns.so
bin/FreeCADCmd: /usr/lib/x86_64-linux-gnu/libQtGui.so
bin/FreeCADCmd: /usr/lib/x86_64-linux-gnu/libQtXml.so
bin/FreeCADCmd: /usr/lib/x86_64-linux-gnu/libQtNetwork.so
bin/FreeCADCmd: /usr/lib/x86_64-linux-gnu/libQtCore.so
bin/FreeCADCmd: lib/libFreeCADBase.so
bin/FreeCADCmd: /usr/lib/libpython2.7.so
bin/FreeCADCmd: /usr/lib/x86_64-linux-gnu/libxerces-c.so
bin/FreeCADCmd: /usr/lib/x86_64-linux-gnu/libz.so
bin/FreeCADCmd: /usr/lib/libboost_filesystem-mt.so
bin/FreeCADCmd: /usr/lib/libboost_program_options-mt.so
bin/FreeCADCmd: /usr/lib/libboost_regex-mt.so
bin/FreeCADCmd: /usr/lib/libboost_signals-mt.so
bin/FreeCADCmd: /usr/lib/libboost_system-mt.so
bin/FreeCADCmd: /usr/lib/libboost_thread-mt.so
bin/FreeCADCmd: /usr/lib/x86_64-linux-gnu/libQtCore.so
bin/FreeCADCmd: src/Main/CMakeFiles/FreeCADMainCmd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/FreeCADCmd"
	cd /home/hpham/the-technocopia-project/third-party/free-cad-build/src/Main && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FreeCADMainCmd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Main/CMakeFiles/FreeCADMainCmd.dir/build: bin/FreeCADCmd
.PHONY : src/Main/CMakeFiles/FreeCADMainCmd.dir/build

src/Main/CMakeFiles/FreeCADMainCmd.dir/requires: src/Main/CMakeFiles/FreeCADMainCmd.dir/MainCmd.cpp.o.requires
.PHONY : src/Main/CMakeFiles/FreeCADMainCmd.dir/requires

src/Main/CMakeFiles/FreeCADMainCmd.dir/clean:
	cd /home/hpham/the-technocopia-project/third-party/free-cad-build/src/Main && $(CMAKE_COMMAND) -P CMakeFiles/FreeCADMainCmd.dir/cmake_clean.cmake
.PHONY : src/Main/CMakeFiles/FreeCADMainCmd.dir/clean

src/Main/CMakeFiles/FreeCADMainCmd.dir/depend:
	cd /home/hpham/the-technocopia-project/third-party/free-cad-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hpham/the-technocopia-project/third-party/free-cad /home/hpham/the-technocopia-project/third-party/free-cad/src/Main /home/hpham/the-technocopia-project/third-party/free-cad-build /home/hpham/the-technocopia-project/third-party/free-cad-build/src/Main /home/hpham/the-technocopia-project/third-party/free-cad-build/src/Main/CMakeFiles/FreeCADMainCmd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/Main/CMakeFiles/FreeCADMainCmd.dir/depend
