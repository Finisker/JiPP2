cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(CSV_lib)

add_executable(CSV_lib src/csvlib.cpp include/csvlib.h)