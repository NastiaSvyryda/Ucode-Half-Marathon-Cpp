project(mightyWizard)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Wizard)
add_subdirectory(Food)


add_library(mightyWizard_src INTERFACE)
target_link_libraries(mightyWizard_src INTERFACE Wizard_src Food_src)