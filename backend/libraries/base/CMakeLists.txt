add_library(base STATIC
    src/main.cpp
    src/main-lobby.cpp
    src/person.cpp    
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../shared/utils/uuid_v4)

target_link_libraries(base
    PUBLIC    
        uuid_v4
)

target_include_directories(base
    PUBLIC
        ./include
)


