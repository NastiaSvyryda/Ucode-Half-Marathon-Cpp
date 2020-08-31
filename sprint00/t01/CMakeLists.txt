project(t01)
set(CMAKE_CXX_STANDARD 17)

add_executable(printDialog  printDialog.h printDialog.cpp)
set_target_properties(printDialog PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")