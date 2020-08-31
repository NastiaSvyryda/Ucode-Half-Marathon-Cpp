project(t04)
set(CMAKE_CXX_STANDARD 17)

add_executable(referenceOrPointer main.cpp referenceOrPointer.cpp referenceOrPointer.h)
set_target_properties(referenceOrPointer PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")