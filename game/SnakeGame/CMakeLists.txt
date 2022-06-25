cmake_minimum_required(VERSION 3.15)
project(snake)

include_directories(include)
aux_source_directory(src BIN_SRC)
add_executable(snake ${BIN_SRC})

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS})

target_link_libraries(
        snake
        ${SDL2_LIBRARIES}
        ${SDL2_IMAGE_LIBRARIES}
)
