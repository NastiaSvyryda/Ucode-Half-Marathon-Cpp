project(Draugr_v4)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_executable(draugr main.cpp)
target_link_libraries(draugr draugr_src)