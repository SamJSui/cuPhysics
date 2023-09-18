# Example CMake file for including cuPhysics

cmake_minimum_required(VERSION 3.0)

project(vector3_example LANGUAGES CXX CUDA)

add_subdirectory(cuphysics)

add_executable(vector3_example 
    ${CMAKE_CURRENT_SOURCE_DIR}/examples/vector3_example.cpp
)

target_link_libraries(vector3_example PRIVATE cuphysics)