cmake_minimum_required(VERSION 3.29)
project(cpp_Core)

set(CMAKE_CXX_STANDARD 14)

include_directories(./)

add_executable(cppExperimental
        cppExperimental.cpp
        cppExperimental.hpp)
