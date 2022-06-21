cmake_minimum_required(VERSION 3.15)
project(2dShoot)

include_directories(include)
aux_source_directory(src BIN_SRC)
add_executable(2dShoot ${BIN_SRC})

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS})

target_link_libraries(
        2dShoot
        ${SDL2_LIBRARIES}
        ${SDL2_IMAGE_LIBRARIES}
)
