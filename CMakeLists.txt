cmake_minimum_required(VERSION 3.25)
project(prototype)

set(CMAKE_CXX_STANDARD 23)

add_executable(prototype main.cpp include/Shape.hpp src/Shape.cpp include/Circle.hpp src/Circle.cpp include/Rectangle.hpp src/Rectangle.cpp)
