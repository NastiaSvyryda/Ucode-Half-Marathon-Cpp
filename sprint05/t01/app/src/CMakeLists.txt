project(draugr)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_library(draugr_src Draugr.cpp Draugr.h)
#target_include_directories(draugr_src
#        "${PROJECT_SOURCE_DIR}"
#        )