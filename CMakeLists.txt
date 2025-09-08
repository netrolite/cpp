cmake_minimum_required(VERSION 3.15)
project(MyProject LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add source files
add_executable(my_project
    src/main.cpp
)

# Include headers
target_include_directories(my_project PRIVATE include)
