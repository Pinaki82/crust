cmake_minimum_required(VERSION 2.8)
project(crust)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall ${CMAKE_CXX_FLAGS}")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(testbed
    src/main.c
)
