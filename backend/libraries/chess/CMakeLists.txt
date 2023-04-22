add_library(chess STATIC
    src/board.cpp
    src/piece.cpp
)

# include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../shared/utils/uuid_v4)

# target_link_libraries(game-backend
#     PRIVATE    
#         uuid_v4
# )

target_include_directories(chess
    PUBLIC
        ./include
)


