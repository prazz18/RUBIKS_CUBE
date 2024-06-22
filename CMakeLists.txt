cmake_minimum_required(VERSION 3.28)
project(RUBIKS_CUBE)

set(CMAKE_CXX_STANDARD 20)

add_executable(RUBIKS_CUBE main.cpp
        GenericRubiksCube.cpp
        GenericRubiksCube.h
        RubiksCube3d.cpp)
