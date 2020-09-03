cmake_minimum_required(VERSION 3.16.3)
project(t01)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(countUniqueWords
               main.cpp
              )
target_link_libraries(countUniqueWords countUniqueWords_lib)
set_target_properties(countUniqueWords PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")