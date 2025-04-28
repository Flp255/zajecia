cmake_minimum_required(VERSION 3.30)
project(array)

set(CMAKE_CXX_STANDARD 17)

add_executable(array main.cpp
        arrayoperation.cpp
        arrayoperation.h)
