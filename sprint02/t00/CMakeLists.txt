project(t00)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_executable(uniqueWords main.cpp)
target_link_libraries(uniqueWords uniqueWords_lib)
set_target_properties(uniqueWords PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")