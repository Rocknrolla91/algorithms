cmake_minimum_required (VERSION 2.8.11)
project (detect_remove_loop)

add_definitions(-std=c++11)

include_directories($ENV{algorithms}/c++/linked_list/implementation/include)
include_directories(include)
include_directories(../../..)

add_executable(detect_remove_loop main.cpp)
add_executable(detect_remove_loop_test test.cpp)
