cmake_minimum_required(VERSION 3.15)
project(t07)

set(CMAKE_CXX_STANDARD 17)

add_executable(inventory main.cpp src/inventory.cpp src/inventory.h)