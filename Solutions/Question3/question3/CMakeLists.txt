cmake_minimum_required(VERSION 3.5)

project(question3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_SOURCES
    main.cpp
    quad.h
    rectangle.cpp
    rectangle.h
)

add_executable(question3
    ${PROJECT_SOURCES}
)
