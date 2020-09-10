project(magicSpells)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Spells)
add_subdirectory(Creatures)


add_library(magicSpells_src INTERFACE)
target_link_libraries(magicSpells_src INTERFACE Creatures_src Spells_src)