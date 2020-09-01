project(t05)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_executable(automaton main.cpp)
set_target_properties(automaton PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")