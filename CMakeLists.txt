cmake_minimum_required(VERSION 3.19)
project(C_Primer)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(C_Primer
        main.cpp C++Primer-2-practice/Cprimer2_1.cpp C++Primer-2-practice/Cprimer2_1.h C++Primer-2-practice/Second.cpp C++Primer-2-practice/Second.h C++Primer-2-practice/3rd.cpp C++Primer-2-practice/3rd.h)
