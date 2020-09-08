project(algorithmUtils)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_library(imperialVsStormcloak_src INTERFACE)
target_sources(imperialVsStormcloak_src INTERFACE Weapon.h Soldier.h)