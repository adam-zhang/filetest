cmake_minimum_required(VERSION 2.8)
project(filetest)
set(CMAKE_BUILD_TYPE Debug)
set(sources main.c)
add_executable(filetest ${sources})
