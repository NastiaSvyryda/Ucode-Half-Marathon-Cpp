project(t00)
cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CXX_STANDARD 17)
add_subdirectory(utils)
add_executable(algorithmUtils main.cpp)
target_link_libraries(algorithmUtils algorithmUtils_lib)
set_target_properties(algorithmUtils PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")