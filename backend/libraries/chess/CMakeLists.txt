add_library(chess STATIC
    src/board.cpp
    src/piece.cpp
    src/match.cpp
    src/chess-player.cpp
)

target_link_libraries(chess 
    PUBLIC
        base
)

target_include_directories(chess
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)


