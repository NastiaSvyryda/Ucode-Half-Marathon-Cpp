project(t03)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_executable(vampireRabbits main.cpp)
target_link_libraries(vampireRabbits vampireRabbits_lib)
set_target_properties(vampireRabbits PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")