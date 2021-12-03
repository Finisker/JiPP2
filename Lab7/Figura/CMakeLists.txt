cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(Figura)

add_executable(Figura src/Figura.cpp include/Figura.h src/main.cpp src/Square.cpp include/Square.h src/Rectangle.cpp include/Rectangle.h src/Circle.cpp include/Circle.h src/Triangle.cpp include/Triangle.h)