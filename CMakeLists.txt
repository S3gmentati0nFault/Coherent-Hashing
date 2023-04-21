cmake_minimum_required(VERSION 3.24)
project(Coherent_Hashing)

set(CMAKE_CXX_STANDARD 17)

add_executable(Coherent_Hashing TreeTest.cpp Tree.cpp Logger.cpp CoherentHashing.cpp)
