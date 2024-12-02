# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(tema3)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(inc)

# Add sources
add_executable(main src/main.cpp src/libraryitem.cpp src/book.cpp)
