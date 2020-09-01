project(t01)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_executable(moveAlong main.cpp)
target_link_libraries(moveAlong moveAlong_lib)
set_target_properties(moveAlong PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")