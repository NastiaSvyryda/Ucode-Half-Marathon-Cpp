project(smartPointers)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -Werror -Wpedantic)
add_subdirectory(src)
add_executable(smartPointers main.cpp)
target_link_libraries(smartPointers smartPointers_src)