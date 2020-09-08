project(Draugr_v3)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(app)

set_target_properties(draugr PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../../")
