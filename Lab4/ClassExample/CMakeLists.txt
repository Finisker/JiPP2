cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(ClassExample)

add_executable(ClassExample src/main.cpp src/MyFirstClass.cpp include/MyFirstClass.h)