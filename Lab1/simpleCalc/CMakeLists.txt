cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(simpleCalc)

add_executable(simpleCalc src/main.cpp src/calc.cpp include/calc.h)