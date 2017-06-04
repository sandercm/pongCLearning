cmake_minimum_required(VERSION 3.7)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp cBall.cpp cBall.h cPaddle.cpp cPaddle.h)
add_executable(untitled ${SOURCE_FILES} cBall.cpp cBall.h)