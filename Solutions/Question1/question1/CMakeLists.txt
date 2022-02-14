cmake_minimum_required(VERSION 3.5)

project(question1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_SOURCES
    main.cpp
    work.cpp
    work.h
)

add_executable(question1
    ${PROJECT_SOURCES}
)
