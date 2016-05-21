cmake_minimum_required(VERSION 3.5)
project(OCLODE_efficient)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x -O3 -Wall -g -Wno-deprecated")

set(SOURCE_FILES main.cpp Clustering.cpp Clustering.h Orthology.cpp Orthology.h SpeciesNetwork.cpp SpeciesNetwork.h)
add_executable(OCLODE_efficient ${SOURCE_FILES})
