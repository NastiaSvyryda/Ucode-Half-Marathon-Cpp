project(dwemerCalculator)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(app)

#target_link_libraries(dwemerCalculator PUBLIC dwemerCalculator_lib)
set_target_properties(dwemerCalculator PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../../")
