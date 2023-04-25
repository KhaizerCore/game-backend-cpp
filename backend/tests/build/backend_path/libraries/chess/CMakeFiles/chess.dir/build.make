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
CMAKE_SOURCE_DIR = /home/dev-projects/game-backend-cpp/backend/tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dev-projects/game-backend-cpp/backend/tests/build

# Include any dependencies generated for this target.
include backend_path/libraries/chess/CMakeFiles/chess.dir/depend.make

# Include the progress variables for this target.
include backend_path/libraries/chess/CMakeFiles/chess.dir/progress.make

# Include the compile flags for this target's objects.
include backend_path/libraries/chess/CMakeFiles/chess.dir/flags.make

backend_path/libraries/chess/CMakeFiles/chess.dir/src/board.cpp.o: backend_path/libraries/chess/CMakeFiles/chess.dir/flags.make
backend_path/libraries/chess/CMakeFiles/chess.dir/src/board.cpp.o: ../../libraries/chess/src/board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev-projects/game-backend-cpp/backend/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object backend_path/libraries/chess/CMakeFiles/chess.dir/src/board.cpp.o"
	cd /home/dev-projects/game-backend-cpp/backend/tests/build/backend_path/libraries/chess && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chess.dir/src/board.cpp.o -c /home/dev-projects/game-backend-cpp/backend/libraries/chess/src/board.cpp

backend_path/libraries/chess/CMakeFiles/chess.dir/src/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chess.dir/src/board.cpp.i"
	cd /home/dev-projects/game-backend-cpp/backend/tests/build/backend_path/libraries/chess && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev-projects/game-backend-cpp/backend/libraries/chess/src/board.cpp > CMakeFiles/chess.dir/src/board.cpp.i

backend_path/libraries/chess/CMakeFiles/chess.dir/src/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chess.dir/src/board.cpp.s"
	cd /home/dev-projects/game-backend-cpp/backend/tests/build/backend_path/libraries/chess && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev-projects/game-backend-cpp/backend/libraries/chess/src/board.cpp -o CMakeFiles/chess.dir/src/board.cpp.s

backend_path/libraries/chess/CMakeFiles/chess.dir/src/piece.cpp.o: backend_path/libraries/chess/CMakeFiles/chess.dir/flags.make
backend_path/libraries/chess/CMakeFiles/chess.dir/src/piece.cpp.o: ../../libraries/chess/src/piece.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev-projects/game-backend-cpp/backend/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object backend_path/libraries/chess/CMakeFiles/chess.dir/src/piece.cpp.o"
	cd /home/dev-projects/game-backend-cpp/backend/tests/build/backend_path/libraries/chess && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chess.dir/src/piece.cpp.o -c /home/dev-projects/game-backend-cpp/backend/libraries/chess/src/piece.cpp

backend_path/libraries/chess/CMakeFiles/chess.dir/src/piece.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chess.dir/src/piece.cpp.i"
	cd /home/dev-projects/game-backend-cpp/backend/tests/build/backend_path/libraries/chess && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev-projects/game-backend-cpp/backend/libraries/chess/src/piece.cpp > CMakeFiles/chess.dir/src/piece.cpp.i

backend_path/libraries/chess/CMakeFiles/chess.dir/src/piece.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chess.dir/src/piece.cpp.s"
	cd /home/dev-projects/game-backend-cpp/backend/tests/build/backend_path/libraries/chess && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev-projects/game-backend-cpp/backend/libraries/chess/src/piece.cpp -o CMakeFiles/chess.dir/src/piece.cpp.s

backend_path/libraries/chess/CMakeFiles/chess.dir/src/match.cpp.o: backend_path/libraries/chess/CMakeFiles/chess.dir/flags.make
backend_path/libraries/chess/CMakeFiles/chess.dir/src/match.cpp.o: ../../libraries/chess/src/match.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev-projects/game-backend-cpp/backend/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object backend_path/libraries/chess/CMakeFiles/chess.dir/src/match.cpp.o"
	cd /home/dev-projects/game-backend-cpp/backend/tests/build/backend_path/libraries/chess && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chess.dir/src/match.cpp.o -c /home/dev-projects/game-backend-cpp/backend/libraries/chess/src/match.cpp

backend_path/libraries/chess/CMakeFiles/chess.dir/src/match.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chess.dir/src/match.cpp.i"
	cd /home/dev-projects/game-backend-cpp/backend/tests/build/backend_path/libraries/chess && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev-projects/game-backend-cpp/backend/libraries/chess/src/match.cpp > CMakeFiles/chess.dir/src/match.cpp.i

backend_path/libraries/chess/CMakeFiles/chess.dir/src/match.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chess.dir/src/match.cpp.s"
	cd /home/dev-projects/game-backend-cpp/backend/tests/build/backend_path/libraries/chess && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev-projects/game-backend-cpp/backend/libraries/chess/src/match.cpp -o CMakeFiles/chess.dir/src/match.cpp.s

# Object files for target chess
chess_OBJECTS = \
"CMakeFiles/chess.dir/src/board.cpp.o" \
"CMakeFiles/chess.dir/src/piece.cpp.o" \
"CMakeFiles/chess.dir/src/match.cpp.o"

# External object files for target chess
chess_EXTERNAL_OBJECTS =

backend_path/libraries/chess/libchess.a: backend_path/libraries/chess/CMakeFiles/chess.dir/src/board.cpp.o
backend_path/libraries/chess/libchess.a: backend_path/libraries/chess/CMakeFiles/chess.dir/src/piece.cpp.o
backend_path/libraries/chess/libchess.a: backend_path/libraries/chess/CMakeFiles/chess.dir/src/match.cpp.o
backend_path/libraries/chess/libchess.a: backend_path/libraries/chess/CMakeFiles/chess.dir/build.make
backend_path/libraries/chess/libchess.a: backend_path/libraries/chess/CMakeFiles/chess.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dev-projects/game-backend-cpp/backend/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libchess.a"
	cd /home/dev-projects/game-backend-cpp/backend/tests/build/backend_path/libraries/chess && $(CMAKE_COMMAND) -P CMakeFiles/chess.dir/cmake_clean_target.cmake
	cd /home/dev-projects/game-backend-cpp/backend/tests/build/backend_path/libraries/chess && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chess.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
backend_path/libraries/chess/CMakeFiles/chess.dir/build: backend_path/libraries/chess/libchess.a

.PHONY : backend_path/libraries/chess/CMakeFiles/chess.dir/build

backend_path/libraries/chess/CMakeFiles/chess.dir/clean:
	cd /home/dev-projects/game-backend-cpp/backend/tests/build/backend_path/libraries/chess && $(CMAKE_COMMAND) -P CMakeFiles/chess.dir/cmake_clean.cmake
.PHONY : backend_path/libraries/chess/CMakeFiles/chess.dir/clean

backend_path/libraries/chess/CMakeFiles/chess.dir/depend:
	cd /home/dev-projects/game-backend-cpp/backend/tests/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dev-projects/game-backend-cpp/backend/tests /home/dev-projects/game-backend-cpp/backend/libraries/chess /home/dev-projects/game-backend-cpp/backend/tests/build /home/dev-projects/game-backend-cpp/backend/tests/build/backend_path/libraries/chess /home/dev-projects/game-backend-cpp/backend/tests/build/backend_path/libraries/chess/CMakeFiles/chess.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : backend_path/libraries/chess/CMakeFiles/chess.dir/depend

