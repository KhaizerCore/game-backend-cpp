# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /home/dev-projects/game-backend-cpp/backend/libraries/base

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dev-projects/game-backend-cpp/backend/libraries/base/build

# Include any dependencies generated for this target.
include CMakeFiles/game-backend.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/game-backend.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/game-backend.dir/flags.make

CMakeFiles/game-backend.dir/src/main.o: CMakeFiles/game-backend.dir/flags.make
CMakeFiles/game-backend.dir/src/main.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev-projects/game-backend-cpp/backend/libraries/base/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/game-backend.dir/src/main.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game-backend.dir/src/main.o -c /home/dev-projects/game-backend-cpp/backend/libraries/base/src/main.cpp

CMakeFiles/game-backend.dir/src/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game-backend.dir/src/main.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev-projects/game-backend-cpp/backend/libraries/base/src/main.cpp > CMakeFiles/game-backend.dir/src/main.i

CMakeFiles/game-backend.dir/src/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game-backend.dir/src/main.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev-projects/game-backend-cpp/backend/libraries/base/src/main.cpp -o CMakeFiles/game-backend.dir/src/main.s

CMakeFiles/game-backend.dir/src/main-lobby.o: CMakeFiles/game-backend.dir/flags.make
CMakeFiles/game-backend.dir/src/main-lobby.o: ../src/main-lobby.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev-projects/game-backend-cpp/backend/libraries/base/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/game-backend.dir/src/main-lobby.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game-backend.dir/src/main-lobby.o -c /home/dev-projects/game-backend-cpp/backend/libraries/base/src/main-lobby.cpp

CMakeFiles/game-backend.dir/src/main-lobby.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game-backend.dir/src/main-lobby.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev-projects/game-backend-cpp/backend/libraries/base/src/main-lobby.cpp > CMakeFiles/game-backend.dir/src/main-lobby.i

CMakeFiles/game-backend.dir/src/main-lobby.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game-backend.dir/src/main-lobby.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev-projects/game-backend-cpp/backend/libraries/base/src/main-lobby.cpp -o CMakeFiles/game-backend.dir/src/main-lobby.s

CMakeFiles/game-backend.dir/src/person.o: CMakeFiles/game-backend.dir/flags.make
CMakeFiles/game-backend.dir/src/person.o: ../src/person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev-projects/game-backend-cpp/backend/libraries/base/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/game-backend.dir/src/person.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game-backend.dir/src/person.o -c /home/dev-projects/game-backend-cpp/backend/libraries/base/src/person.cpp

CMakeFiles/game-backend.dir/src/person.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game-backend.dir/src/person.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev-projects/game-backend-cpp/backend/libraries/base/src/person.cpp > CMakeFiles/game-backend.dir/src/person.i

CMakeFiles/game-backend.dir/src/person.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game-backend.dir/src/person.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev-projects/game-backend-cpp/backend/libraries/base/src/person.cpp -o CMakeFiles/game-backend.dir/src/person.s

# Object files for target game-backend
game__backend_OBJECTS = \
"CMakeFiles/game-backend.dir/src/main.o" \
"CMakeFiles/game-backend.dir/src/main-lobby.o" \
"CMakeFiles/game-backend.dir/src/person.o"

# External object files for target game-backend
game__backend_EXTERNAL_OBJECTS =

game-backend: CMakeFiles/game-backend.dir/src/main.o
game-backend: CMakeFiles/game-backend.dir/src/main-lobby.o
game-backend: CMakeFiles/game-backend.dir/src/person.o
game-backend: CMakeFiles/game-backend.dir/build.make
game-backend: CMakeFiles/game-backend.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dev-projects/game-backend-cpp/backend/libraries/base/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable game-backend"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game-backend.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/game-backend.dir/build: game-backend

.PHONY : CMakeFiles/game-backend.dir/build

CMakeFiles/game-backend.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/game-backend.dir/cmake_clean.cmake
.PHONY : CMakeFiles/game-backend.dir/clean

CMakeFiles/game-backend.dir/depend:
	cd /home/dev-projects/game-backend-cpp/backend/libraries/base/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dev-projects/game-backend-cpp/backend/libraries/base /home/dev-projects/game-backend-cpp/backend/libraries/base /home/dev-projects/game-backend-cpp/backend/libraries/base/build /home/dev-projects/game-backend-cpp/backend/libraries/base/build /home/dev-projects/game-backend-cpp/backend/libraries/base/build/CMakeFiles/game-backend.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/game-backend.dir/depend
