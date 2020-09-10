project(lockpicking)
cmake_minimum_required(VERSION 3.18.2)
set(CMAKE_CXX_STANDARD 17)

add_library(Interfaces_src INTERFACE)
target_sources(Interfaces_src INTERFACE ILockable.h IOpenable.h)