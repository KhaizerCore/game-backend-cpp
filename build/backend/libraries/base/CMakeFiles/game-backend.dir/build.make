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
CMAKE_SOURCE_DIR = /home/dev-projects/game-backend-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dev-projects/game-backend-cpp/build

# Include any dependencies generated for this target.
include backend/libraries/base/CMakeFiles/game-backend.dir/depend.make

# Include the progress variables for this target.
include backend/libraries/base/CMakeFiles/game-backend.dir/progress.make

# Include the compile flags for this target's objects.
include backend/libraries/base/CMakeFiles/game-backend.dir/flags.make

backend/libraries/base/CMakeFiles/game-backend.dir/src/main.cpp.o: backend/libraries/base/CMakeFiles/game-backend.dir/flags.make
backend/libraries/base/CMakeFiles/game-backend.dir/src/main.cpp.o: ../backend/libraries/base/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev-projects/game-backend-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object backend/libraries/base/CMakeFiles/game-backend.dir/src/main.cpp.o"
	cd /home/dev-projects/game-backend-cpp/build/backend/libraries/base && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game-backend.dir/src/main.cpp.o -c /home/dev-projects/game-backend-cpp/backend/libraries/base/src/main.cpp

backend/libraries/base/CMakeFiles/game-backend.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game-backend.dir/src/main.cpp.i"
	cd /home/dev-projects/game-backend-cpp/build/backend/libraries/base && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev-projects/game-backend-cpp/backend/libraries/base/src/main.cpp > CMakeFiles/game-backend.dir/src/main.cpp.i

backend/libraries/base/CMakeFiles/game-backend.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game-backend.dir/src/main.cpp.s"
	cd /home/dev-projects/game-backend-cpp/build/backend/libraries/base && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev-projects/game-backend-cpp/backend/libraries/base/src/main.cpp -o CMakeFiles/game-backend.dir/src/main.cpp.s

backend/libraries/base/CMakeFiles/game-backend.dir/src/main-lobby.cpp.o: backend/libraries/base/CMakeFiles/game-backend.dir/flags.make
backend/libraries/base/CMakeFiles/game-backend.dir/src/main-lobby.cpp.o: ../backend/libraries/base/src/main-lobby.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev-projects/game-backend-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object backend/libraries/base/CMakeFiles/game-backend.dir/src/main-lobby.cpp.o"
	cd /home/dev-projects/game-backend-cpp/build/backend/libraries/base && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game-backend.dir/src/main-lobby.cpp.o -c /home/dev-projects/game-backend-cpp/backend/libraries/base/src/main-lobby.cpp

backend/libraries/base/CMakeFiles/game-backend.dir/src/main-lobby.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game-backend.dir/src/main-lobby.cpp.i"
	cd /home/dev-projects/game-backend-cpp/build/backend/libraries/base && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev-projects/game-backend-cpp/backend/libraries/base/src/main-lobby.cpp > CMakeFiles/game-backend.dir/src/main-lobby.cpp.i

backend/libraries/base/CMakeFiles/game-backend.dir/src/main-lobby.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game-backend.dir/src/main-lobby.cpp.s"
	cd /home/dev-projects/game-backend-cpp/build/backend/libraries/base && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev-projects/game-backend-cpp/backend/libraries/base/src/main-lobby.cpp -o CMakeFiles/game-backend.dir/src/main-lobby.cpp.s

backend/libraries/base/CMakeFiles/game-backend.dir/src/person.cpp.o: backend/libraries/base/CMakeFiles/game-backend.dir/flags.make
backend/libraries/base/CMakeFiles/game-backend.dir/src/person.cpp.o: ../backend/libraries/base/src/person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev-projects/game-backend-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object backend/libraries/base/CMakeFiles/game-backend.dir/src/person.cpp.o"
	cd /home/dev-projects/game-backend-cpp/build/backend/libraries/base && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game-backend.dir/src/person.cpp.o -c /home/dev-projects/game-backend-cpp/backend/libraries/base/src/person.cpp

backend/libraries/base/CMakeFiles/game-backend.dir/src/person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game-backend.dir/src/person.cpp.i"
	cd /home/dev-projects/game-backend-cpp/build/backend/libraries/base && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev-projects/game-backend-cpp/backend/libraries/base/src/person.cpp > CMakeFiles/game-backend.dir/src/person.cpp.i

backend/libraries/base/CMakeFiles/game-backend.dir/src/person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game-backend.dir/src/person.cpp.s"
	cd /home/dev-projects/game-backend-cpp/build/backend/libraries/base && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev-projects/game-backend-cpp/backend/libraries/base/src/person.cpp -o CMakeFiles/game-backend.dir/src/person.cpp.s

# Object files for target game-backend
game__backend_OBJECTS = \
"CMakeFiles/game-backend.dir/src/main.cpp.o" \
"CMakeFiles/game-backend.dir/src/main-lobby.cpp.o" \
"CMakeFiles/game-backend.dir/src/person.cpp.o"

# External object files for target game-backend
game__backend_EXTERNAL_OBJECTS =

backend/libraries/base/game-backend: backend/libraries/base/CMakeFiles/game-backend.dir/src/main.cpp.o
backend/libraries/base/game-backend: backend/libraries/base/CMakeFiles/game-backend.dir/src/main-lobby.cpp.o
backend/libraries/base/game-backend: backend/libraries/base/CMakeFiles/game-backend.dir/src/person.cpp.o
backend/libraries/base/game-backend: backend/libraries/base/CMakeFiles/game-backend.dir/build.make
backend/libraries/base/game-backend: backend/libraries/base/CMakeFiles/game-backend.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dev-projects/game-backend-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable game-backend"
	cd /home/dev-projects/game-backend-cpp/build/backend/libraries/base && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game-backend.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
backend/libraries/base/CMakeFiles/game-backend.dir/build: backend/libraries/base/game-backend

.PHONY : backend/libraries/base/CMakeFiles/game-backend.dir/build

backend/libraries/base/CMakeFiles/game-backend.dir/clean:
	cd /home/dev-projects/game-backend-cpp/build/backend/libraries/base && $(CMAKE_COMMAND) -P CMakeFiles/game-backend.dir/cmake_clean.cmake
.PHONY : backend/libraries/base/CMakeFiles/game-backend.dir/clean

backend/libraries/base/CMakeFiles/game-backend.dir/depend:
	cd /home/dev-projects/game-backend-cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dev-projects/game-backend-cpp /home/dev-projects/game-backend-cpp/backend/libraries/base /home/dev-projects/game-backend-cpp/build /home/dev-projects/game-backend-cpp/build/backend/libraries/base /home/dev-projects/game-backend-cpp/build/backend/libraries/base/CMakeFiles/game-backend.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : backend/libraries/base/CMakeFiles/game-backend.dir/depend
