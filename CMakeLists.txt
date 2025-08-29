cmake_minimum_required(VERSION 3.14)
project(Lab3)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/utils)

file(GLOB UTILS_SOURCES ${CMAKE_SOURCE_DIR}/utils/*.cpp)
add_library(utils STATIC ${UTILS_SOURCES})

file(GLOB MAP_SOURCES ${CMAKE_SOURCE_DIR}/map/*.cpp)
add_executable(map ${MAP_SOURCES})
target_link_libraries(map PRIVATE utils)

file(GLOB COMPOSITION_SOURCES ${CMAKE_SOURCE_DIR}/composition/*.cpp)
add_executable(composition ${COMPOSITION_SOURCES})
target_link_libraries(composition PRIVATE utils)
