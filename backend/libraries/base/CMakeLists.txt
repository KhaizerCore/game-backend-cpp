add_executable(game-backend 
    src/main.cpp
    src/main-lobby.cpp
    src/person.cpp    
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../shared/utils/uuid_v4)

target_link_libraries(game-backend
    PRIVATE    
        uuid_v4
)

target_include_directories(game-backend
    PUBLIC
        ./include
)


