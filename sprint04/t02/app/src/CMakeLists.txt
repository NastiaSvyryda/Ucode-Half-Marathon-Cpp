cmake_minimum_required(VERSION 3.16.3)
project(t03)

set(CMAKE_CXX_STANDARD 17)

add_library(soldier_lib
            ImperialSoldier.cpp ImperialSoldier.h
            StormcloakSoldier.cpp StormcloakSoldier.h
            Sword.cpp Sword.h
            Axe.cpp Axe.h )