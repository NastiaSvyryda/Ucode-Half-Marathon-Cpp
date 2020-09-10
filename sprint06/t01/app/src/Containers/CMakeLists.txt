project(lockpicking)
cmake_minimum_required(VERSION 3.18.2)
set(CMAKE_CXX_STANDARD 17)

add_library(Containers_src
            Container.cpp Container.h
            Barrel.cpp Barrel.h
            Chest.cpp Chest.h
            LockpickDifficulty.h
            Safe.cpp Safe.h
            )