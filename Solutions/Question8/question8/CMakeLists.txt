cmake_minimum_required(VERSION 3.5)

project(question8 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_SOURCES
    main.cpp
    point.cpp
    point.h
)

add_executable(question8
    ${PROJECT_SOURCES}
)
