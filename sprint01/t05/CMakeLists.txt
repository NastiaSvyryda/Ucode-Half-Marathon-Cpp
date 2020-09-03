project(t05)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_executable(stdAlgoV2 main.cpp)
target_link_libraries(stdAlgoV2 stdAlgoV2_lib)
set_target_properties(stdAlgoV2 PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")