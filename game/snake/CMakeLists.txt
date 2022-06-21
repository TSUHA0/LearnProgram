cmake_minimum_required(VERSION 3.15)

project(Snake)

include_directories(include)

add_executable(
        Snake
        src/main.cpp
)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS})

target_link_libraries(
        Snake
        ${SDL2_LIBRARIES}
        ${SDL2_IMAGE_LIBRARIES}
)
