project(vector)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_compile_options(-Wall -Wextra -Werror -Wpedantic)
include_directories(${CMAKE_SOURCE_DIR}/app/src)
include_directories(${CMAKE_SOURCE_DIR}/app/utils)
add_subdirectory(app)
set_target_properties(vector PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../../")
