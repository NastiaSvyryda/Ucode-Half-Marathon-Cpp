project(t00)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_executable(helloTamriel helloTamriel.cpp)
set_target_properties(helloTamriel PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")