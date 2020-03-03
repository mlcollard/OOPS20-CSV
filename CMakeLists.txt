# @file CMakeLists.txt
# 
# CMake files for CSV example

cmake_minimum_required(VERSION 3.10)

# project info
project(CSV)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)

# Application is based on .cpp file only
add_executable(splitcsv splitcsv.cpp CSV.cpp)
