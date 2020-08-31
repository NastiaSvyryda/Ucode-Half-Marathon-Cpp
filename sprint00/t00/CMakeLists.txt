project(t00)
set(CMAKE_CXX_STANDARD 17)

add_executable(helloTamriel helloTamriel.cpp)
set_target_properties(helloTamriel PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")