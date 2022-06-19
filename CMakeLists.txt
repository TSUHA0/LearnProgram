cmake_minimum_required(VERSION 3.15)

project(cpp VERSION 0.1.0)

include_directories(basecpp/include)

set(CMAKE_EXPORT_COMPILE_COMMANDS  ON)

#add_executable(cpp basecpp/src/helloworld/entity.cpp basecpp/src/helloworld/entity.h)

#add_executable(lamda_mutable basecpp/src/helloworld/lamda_mutable.cpp)
#add_executable(smart_pointer basecpp/src/helloworld/smart_pointer.cpp)
#add_executable(overload basecpp/src/helloworld/overload.cpp)
#add_executable(template_explicit basecpp/src/helloworld/template_explicit.cpp)
#add_executable(8.1RepeatStr basecpp/src/8AdvInFunc/8.1RepeatStr.cpp)
add_executable(8.5max5 basecpp/src/8AdvInFunc/8.5max5.cpp)