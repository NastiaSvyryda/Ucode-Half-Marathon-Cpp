project(t02)
set(CMAKE_CXX_STANDARD 17)

add_executable(walletManager main.cpp walletManager.cpp walletManager.h)
set_target_properties(walletManager PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")