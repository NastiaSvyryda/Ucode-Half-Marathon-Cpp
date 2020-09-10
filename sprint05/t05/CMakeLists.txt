project(t05)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/app/src)
add_subdirectory(app)
set_target_properties(werewolf PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../../")
