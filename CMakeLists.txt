cmake_minimum_required(VERSION 3.5)

project(runTests  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage --coverage")
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_subdirectory(googletest)

add_executable(runTests main.cpp)
target_link_libraries(runTests  ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} gtest_main)

