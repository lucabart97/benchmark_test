cmake_minimum_required(VERSION 3.18...3.19)

project(tkGui
  VERSION 0.0.1
  DESCRIPTION "tkGui project"
  LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 14 CACHE STRING "The C++ standard to use")
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake/)

set(BENCHMARK_ENABLE_TESTING OFF)
add_subdirectory(benchmark)


add_executable(benchmark_test benchmark_test.cpp)
target_link_libraries(benchmark_test benchmark::benchmark)