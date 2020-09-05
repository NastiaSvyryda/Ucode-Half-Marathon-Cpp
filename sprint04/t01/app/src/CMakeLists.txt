project(algorithmUtils)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_library(imperialVsStormcloak_src
            ImperialSoldier.cpp ImperialSoldier.h
            StormcloakSoldier.cpp StormcloakSoldier.h
            Sword.cpp Sword.h
            Axe.cpp Axe.h)