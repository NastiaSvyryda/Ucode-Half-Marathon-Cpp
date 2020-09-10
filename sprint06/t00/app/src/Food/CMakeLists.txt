project(mightyWizard)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_library(
	    Food_src
            FoodItem.cpp
            FoodItem.h
            FoodType.h
            ApplePie.cpp
            ApplePie.h
            PoisonedFood.cpp
            PoisonedFood.h
            HoneyNut.cpp
            HoneyNut.h
            SweetRoll.cpp
            SweetRoll.h
            )