cmake_minimum_required(VERSION 3.15)

project(cpp VERSION 0.1.0)

include_directories(include)

set(CMAKE_EXPORT_COMPILE_COMMANDS  ON)

add_executable(cpp src/4compoundtype/4.1.cpp)
