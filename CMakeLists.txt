cmake_minimum_required(VERSION 2.8.9)
project(Series)

include_directories(include)

set(SOURCES src/Series.cpp src/main.cpp)

add_executable(Series ${SOURCES})
