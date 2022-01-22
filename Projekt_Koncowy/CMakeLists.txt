cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD  17)

project(Koncowy)

include_directories(include)

add_executable(Koncowy src/main.cpp src/Character.cpp include/Character.h src/Player.cpp include/Player.h src/Enemy.cpp include/Enemy.h)
