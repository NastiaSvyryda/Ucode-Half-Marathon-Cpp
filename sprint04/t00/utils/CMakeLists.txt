cmake_minimum_required(VERSION 3.16.3)
project(t00)

set(CMAKE_CXX_STANDARD 17)

add_library(utils INTERFACE)
target_sources(utils INTERFACE algorithmUtils.h)

#cmake_minimum_required(VERSION 3.10)
#
#set(LIBMANE "utils")
#project(${LIBMANE} VERSION 1.0.0)
#
#add_library(${LIBMANE} INTERFACE)
#
#
#target_include_directories(${LIBMANE} INTERFACE
#        "${PROJECT_SOURCE_DIR}"
#        )