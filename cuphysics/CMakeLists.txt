cmake_minimum_required(VERSION 3.9)

project(cuphysics 
  VERSION 1.0.1 
  DESCRIPTION "cuPhysics is a CUDA-accelerated classical mechanics physics engine"
  LANGUAGES CXX CUDA
)

add_library(cuphysics STATIC
  src/vector3.cpp
)

set_target_properties(cuphysics 
  PROPERTIES VERSION ${PROJECT_VERSION}
)

set_target_properties(cuphysics
  PROPERTIES CUDA_SEPARABLE_COMPILATION ON
)

target_include_directories(cuphysics PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/cuphysics>
  $<INSTALL_INTERFACE:include/cuphysics>
)

target_include_directories(cuphysics PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

set_target_properties(cuphysics PROPERTIES PREFIX "")
set_target_properties(cuphysics PROPERTIES OUTPUT_NAME "cuphysics")

target_compile_features(cuphysics PUBLIC cxx_std_11)