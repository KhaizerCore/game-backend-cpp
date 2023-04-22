cmake_minimum_required(VERSION 3.10)

add_executable(base base.cpp)

# target_link_libraries()

target_include_directories(
    PUBLIC
        ./include
)

