project(lockpicking)
cmake_minimum_required(VERSION 3.18.2)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Player)
add_subdirectory(Containers)
add_subdirectory(Interfaces)

add_library(lockpicking_src INTERFACE)
target_link_libraries(lockpicking_src INTERFACE Interfaces_src Player_src Containers_src)