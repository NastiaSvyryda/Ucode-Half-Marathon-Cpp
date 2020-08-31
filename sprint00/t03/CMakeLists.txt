project(t03)
set(CMAKE_CXX_STANDARD 17)

add_executable(castSpells main.cpp castSpells.cpp castSpells.h)
set_target_properties(castSpells PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")