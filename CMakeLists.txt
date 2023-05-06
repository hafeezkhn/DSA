cmake_minimum_required(VERSION 3.5)

project(runTests  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests main.cpp)
target_link_libraries(runTests  ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES})
