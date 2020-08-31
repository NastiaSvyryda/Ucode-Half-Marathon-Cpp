project(t07)
set(CMAKE_CXX_STANDARD 17)

add_executable(inventory main.cpp src/inventory.cpp src/inventory.h)
set_target_properties(inventory PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")