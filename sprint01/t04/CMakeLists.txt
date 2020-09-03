project(t04)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_executable(stdAlgoV1 main.cpp)
target_link_libraries(stdAlgoV1 stdAlgoV1_lib)
set_target_properties(stdAlgoV1 PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")