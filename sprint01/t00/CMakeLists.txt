project(t00)

set(CMAKE_CXX_STANDARD 17)

add_executable(simpleSort main.cpp src/simpleSort.cpp src/simpleSort.h)
set_target_properties(simpleSort PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")