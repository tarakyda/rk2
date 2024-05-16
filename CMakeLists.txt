cmake_minimum_required(VERSION 3.10)

project(InterpreterPattern)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(interpreter main.cpp Interpreter.cpp)


add_subdirectory(Catch2)
add_executable(tests test.cpp Interpreter.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2)

