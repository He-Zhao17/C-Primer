cmake_minimum_required(VERSION 3.19)
project(C_Primer)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(C_Primer
        "function 2.cpp" C++Primer-2-practice/prac1.cpp)
