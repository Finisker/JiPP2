cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(Stops)

add_executable(vectorExample src/Line.cpp include/Line.h src/Stop.cpp include/Stop.h src/vExample.cpp)