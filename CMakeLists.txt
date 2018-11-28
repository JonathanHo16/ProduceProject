cmake_minimum_required(VERSION 3.12)
project(ProduceProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(ProduceProject main.cpp Produce.cpp Produce.hpp SeasonalProduce.cpp SeasonalProduce.hpp
        FruitsAndVeggiesBox.cpp FruitsAndVeggiesBox.hpp TestSuite.cpp TestSuite.hpp)