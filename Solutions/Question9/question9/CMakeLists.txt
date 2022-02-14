cmake_minimum_required(VERSION 3.5)

project(question9 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_SOURCES
    main.cpp
    existence.cpp
    existence.h
)

add_executable(question9
    ${PROJECT_SOURCES}
)
