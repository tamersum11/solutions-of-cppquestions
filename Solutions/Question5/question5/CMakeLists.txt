cmake_minimum_required(VERSION 3.5)

project(question5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(PROJECT_SOURCES
    main.cpp
    triple.cpp
    triple.h
)

add_executable(question5
    ${PROJECT_SOURCES}
)
