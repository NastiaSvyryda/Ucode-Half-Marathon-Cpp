cmake_minimum_required(VERSION 3.16.3)
project(t00)
set(CMAKE_CXX_STANDARD 17)

add_compile_options(-Wall -Wextra -Werror -Wpedantic)
add_library(utils INTERFACE)
target_sources(utils INTERFACE algorithmUtils.h)
