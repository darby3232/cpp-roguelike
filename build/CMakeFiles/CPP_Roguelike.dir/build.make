# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = F:\DevTools\CMake\bin\cmake.exe

# The command to remove a file.
RM = F:\DevTools\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\GameDevelopment\CPP_ProcGame\cpp-roguelike

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GameDevelopment\CPP_ProcGame\cpp-roguelike\build

# Include any dependencies generated for this target.
include CMakeFiles/CPP_Roguelike.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CPP_Roguelike.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CPP_Roguelike.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPP_Roguelike.dir/flags.make

CMakeFiles/CPP_Roguelike.dir/main.cpp.obj: CMakeFiles/CPP_Roguelike.dir/flags.make
CMakeFiles/CPP_Roguelike.dir/main.cpp.obj: CMakeFiles/CPP_Roguelike.dir/includes_CXX.rsp
CMakeFiles/CPP_Roguelike.dir/main.cpp.obj: ../main.cpp
CMakeFiles/CPP_Roguelike.dir/main.cpp.obj: CMakeFiles/CPP_Roguelike.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GameDevelopment\CPP_ProcGame\cpp-roguelike\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CPP_Roguelike.dir/main.cpp.obj"
	F:\DevTools\MinGW64_32bit\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CPP_Roguelike.dir/main.cpp.obj -MF CMakeFiles\CPP_Roguelike.dir\main.cpp.obj.d -o CMakeFiles\CPP_Roguelike.dir\main.cpp.obj -c F:\GameDevelopment\CPP_ProcGame\cpp-roguelike\main.cpp

CMakeFiles/CPP_Roguelike.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP_Roguelike.dir/main.cpp.i"
	F:\DevTools\MinGW64_32bit\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GameDevelopment\CPP_ProcGame\cpp-roguelike\main.cpp > CMakeFiles\CPP_Roguelike.dir\main.cpp.i

CMakeFiles/CPP_Roguelike.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP_Roguelike.dir/main.cpp.s"
	F:\DevTools\MinGW64_32bit\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GameDevelopment\CPP_ProcGame\cpp-roguelike\main.cpp -o CMakeFiles\CPP_Roguelike.dir\main.cpp.s

# Object files for target CPP_Roguelike
CPP_Roguelike_OBJECTS = \
"CMakeFiles/CPP_Roguelike.dir/main.cpp.obj"

# External object files for target CPP_Roguelike
CPP_Roguelike_EXTERNAL_OBJECTS =

CPP_Roguelike.exe: CMakeFiles/CPP_Roguelike.dir/main.cpp.obj
CPP_Roguelike.exe: CMakeFiles/CPP_Roguelike.dir/build.make
CPP_Roguelike.exe: EventSystem/libEventSystem.a
CPP_Roguelike.exe: CMakeFiles/CPP_Roguelike.dir/linklibs.rsp
CPP_Roguelike.exe: CMakeFiles/CPP_Roguelike.dir/objects1.rsp
CPP_Roguelike.exe: CMakeFiles/CPP_Roguelike.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GameDevelopment\CPP_ProcGame\cpp-roguelike\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CPP_Roguelike.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CPP_Roguelike.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPP_Roguelike.dir/build: CPP_Roguelike.exe
.PHONY : CMakeFiles/CPP_Roguelike.dir/build

CMakeFiles/CPP_Roguelike.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CPP_Roguelike.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CPP_Roguelike.dir/clean

CMakeFiles/CPP_Roguelike.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GameDevelopment\CPP_ProcGame\cpp-roguelike F:\GameDevelopment\CPP_ProcGame\cpp-roguelike F:\GameDevelopment\CPP_ProcGame\cpp-roguelike\build F:\GameDevelopment\CPP_ProcGame\cpp-roguelike\build F:\GameDevelopment\CPP_ProcGame\cpp-roguelike\build\CMakeFiles\CPP_Roguelike.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CPP_Roguelike.dir/depend
