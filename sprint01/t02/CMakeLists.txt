project(t02)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_executable(visitAll main.cpp)
target_link_libraries(visitAll visitAll_lib)
set_target_properties(visitAll PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")