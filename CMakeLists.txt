cmake_minimum_required(VERSION 3.13)
project(Piscine-CPP)
set(CMAKE_CXX_STANDARD 14)
include_directories(.)
include_directories(day00)
include_directories(day01)
include_directories(day02)
include_directories(day03)
include_directories(day04)
include_directories(day05)
include_directories(day06)
include_directories(day07)
include_directories(day08)
include_directories(utils_test)
file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "*/*/*.*pp")
add_executable(main ${SOURCES})