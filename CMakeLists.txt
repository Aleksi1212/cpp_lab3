cmake_minimum_required(VERSION 3.14)
project(Lab2)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB MAP_SOURCES ${CMAKE_SOURCE_DIR}/map/*.cpp)
add_executable(map ${MAP_SOURCES})

file(GLOB COMPOSITION_SOURCES ${CMAKE_SOURCE_DIR}/composition/*.cpp)
add_executable(composition ${COMPOSITION_SOURCES})