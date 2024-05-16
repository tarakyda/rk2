cmake_minimum_required(VERSION 3.10)


project(build1)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


add_executable(interpreter main.cpp Interpreter.cpp)

