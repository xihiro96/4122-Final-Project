# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kevjghost/Desktop/MainMenu

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kevjghost/Desktop/MainMenu/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MainMenu.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MainMenu.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MainMenu.dir/flags.make

CMakeFiles/MainMenu.dir/main.cpp.o: CMakeFiles/MainMenu.dir/flags.make
CMakeFiles/MainMenu.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kevjghost/Desktop/MainMenu/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MainMenu.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MainMenu.dir/main.cpp.o -c /Users/kevjghost/Desktop/MainMenu/main.cpp

CMakeFiles/MainMenu.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MainMenu.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kevjghost/Desktop/MainMenu/main.cpp > CMakeFiles/MainMenu.dir/main.cpp.i

CMakeFiles/MainMenu.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MainMenu.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kevjghost/Desktop/MainMenu/main.cpp -o CMakeFiles/MainMenu.dir/main.cpp.s

CMakeFiles/MainMenu.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/MainMenu.dir/main.cpp.o.requires

CMakeFiles/MainMenu.dir/main.cpp.o.provides: CMakeFiles/MainMenu.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/MainMenu.dir/build.make CMakeFiles/MainMenu.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/MainMenu.dir/main.cpp.o.provides

CMakeFiles/MainMenu.dir/main.cpp.o.provides.build: CMakeFiles/MainMenu.dir/main.cpp.o


CMakeFiles/MainMenu.dir/Menu.cpp.o: CMakeFiles/MainMenu.dir/flags.make
CMakeFiles/MainMenu.dir/Menu.cpp.o: ../Menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kevjghost/Desktop/MainMenu/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MainMenu.dir/Menu.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MainMenu.dir/Menu.cpp.o -c /Users/kevjghost/Desktop/MainMenu/Menu.cpp

CMakeFiles/MainMenu.dir/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MainMenu.dir/Menu.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kevjghost/Desktop/MainMenu/Menu.cpp > CMakeFiles/MainMenu.dir/Menu.cpp.i

CMakeFiles/MainMenu.dir/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MainMenu.dir/Menu.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kevjghost/Desktop/MainMenu/Menu.cpp -o CMakeFiles/MainMenu.dir/Menu.cpp.s

CMakeFiles/MainMenu.dir/Menu.cpp.o.requires:

.PHONY : CMakeFiles/MainMenu.dir/Menu.cpp.o.requires

CMakeFiles/MainMenu.dir/Menu.cpp.o.provides: CMakeFiles/MainMenu.dir/Menu.cpp.o.requires
	$(MAKE) -f CMakeFiles/MainMenu.dir/build.make CMakeFiles/MainMenu.dir/Menu.cpp.o.provides.build
.PHONY : CMakeFiles/MainMenu.dir/Menu.cpp.o.provides

CMakeFiles/MainMenu.dir/Menu.cpp.o.provides.build: CMakeFiles/MainMenu.dir/Menu.cpp.o


# Object files for target MainMenu
MainMenu_OBJECTS = \
"CMakeFiles/MainMenu.dir/main.cpp.o" \
"CMakeFiles/MainMenu.dir/Menu.cpp.o"

# External object files for target MainMenu
MainMenu_EXTERNAL_OBJECTS =

MainMenu: CMakeFiles/MainMenu.dir/main.cpp.o
MainMenu: CMakeFiles/MainMenu.dir/Menu.cpp.o
MainMenu: CMakeFiles/MainMenu.dir/build.make
MainMenu: CMakeFiles/MainMenu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kevjghost/Desktop/MainMenu/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MainMenu"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MainMenu.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MainMenu.dir/build: MainMenu

.PHONY : CMakeFiles/MainMenu.dir/build

CMakeFiles/MainMenu.dir/requires: CMakeFiles/MainMenu.dir/main.cpp.o.requires
CMakeFiles/MainMenu.dir/requires: CMakeFiles/MainMenu.dir/Menu.cpp.o.requires

.PHONY : CMakeFiles/MainMenu.dir/requires

CMakeFiles/MainMenu.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MainMenu.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MainMenu.dir/clean

CMakeFiles/MainMenu.dir/depend:
	cd /Users/kevjghost/Desktop/MainMenu/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kevjghost/Desktop/MainMenu /Users/kevjghost/Desktop/MainMenu /Users/kevjghost/Desktop/MainMenu/cmake-build-debug /Users/kevjghost/Desktop/MainMenu/cmake-build-debug /Users/kevjghost/Desktop/MainMenu/cmake-build-debug/CMakeFiles/MainMenu.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MainMenu.dir/depend
