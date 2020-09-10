project(mightyWizard)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_library(
            Wizard_src
            MightyWizard.cpp
            MightyWizard.h
            AbstractWizard.cpp
            AbstractWizard.h
	   )