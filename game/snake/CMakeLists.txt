cmake_minimum_required(VERSION 3.15)

project(Snake)

include_directories(include)

add_executable(
        Snake
        src/main.cpp
)

find_package(SDL2 REQUIRED)
if (SDL2_FOUND)
    message("SDL2 found")
else ()
    message(FATAL_ERROR "Cannot find SDL2")
endif ()

include_directories(${SDL2_INCLUDE_DIRS})
# message(${SDL2_INCLUDE_DIRS})
# message(${SDL2_LIBRARIES})

target_link_libraries(
        Snake
        ${SDL2_LIBRARIES}
)
