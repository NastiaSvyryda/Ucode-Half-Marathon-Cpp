project(t05)
set(CMAKE_CXX_STANDARD 17)

add_executable(automaton main.cpp)
set_target_properties(automaton PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")