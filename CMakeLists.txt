cmake_minimum_required(VERSION 3.15)

project(cpp VERSION 0.1.0)

include_directories(basecpp/include)

set(CMAKE_EXPORT_COMPILE_COMMANDS  ON)

add_executable(cpp basecpp/src/helloworld/entity.cpp basecpp/src/helloworld/entity.h)


add_executable(lamda_mutable basecpp/src/helloworld/lamda_mutable.cpp)