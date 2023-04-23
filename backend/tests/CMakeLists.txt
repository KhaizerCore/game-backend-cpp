cmake_minimum_required(VERSION 3.18)

project(chest-test)

add_executable(chess-test chess-test.cpp)

add_subdirectory(../../backend backend_path)

target_link_libraries(chess-test 
    PRIVATE
        chess
        base
)