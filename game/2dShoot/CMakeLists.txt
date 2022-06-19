cmake_minimum_required(VERSION 3.15)

project(2dShoot)

include_directories(include)
aux_source_directory(src BIN_SRC)

add_executable(2dShoot ${BIN_SRC})

find_package(SDL2 REQUIRED)
if (SDL2_FOUND)
    message("SDL2 found")
else ()
    message(FATAL_ERROR "Cannot find SDL2")
endif ()

include_directories(${SDL2_INCLUDE_DIRS})

target_link_libraries(
        2dShoot
        ${SDL2_LIBRARIES}
)
