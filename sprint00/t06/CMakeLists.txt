project(t06)
set(CMAKE_CXX_STANDARD 17)

add_executable(meadSong main.cpp meadSong.cpp meadSong.h)
set_target_properties(meadSong PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")