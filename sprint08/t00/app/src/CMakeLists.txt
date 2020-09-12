project(smartPointers)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_compile_options(-Wall -Wextra -Werror -Wpedantic)
add_library(smartPointers_src
        Map.h Map.cpp
        MoveManager.h MoveManager.cpp
        Player.h Player.cpp)