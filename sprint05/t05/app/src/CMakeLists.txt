project(t05)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_library(werewolf_src Werewolf.cpp Werewolf.h Creature.cpp Creature.h Wolf.h Human.h)