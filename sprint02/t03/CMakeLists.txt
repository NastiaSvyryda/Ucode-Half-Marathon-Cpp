cmake_minimum_required(VERSION 3.16.3)
project(t03)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(tesLibrary
               main.cpp
              )
target_link_libraries(tesLibrary tesLibrary_lib)
set_target_properties(tesLibrary PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")