cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(Zad1)

include_directories(include)

add_executable(Zad1 src/main.cpp src/Car.cpp)