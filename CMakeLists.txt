# cmake_minimum_required(VERSION <specify CMake version here>)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled1 main.cpp Product.h Product.cpp MyException.cpp MyException.h Nonfood.h)