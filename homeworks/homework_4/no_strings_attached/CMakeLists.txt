cmake_minimum_required(VERSION 3.10)
project(no_strings_attached CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable testing
enable_testing()

# Include subdirectories
add_subdirectory(external)
add_subdirectory(no_strings_attached)
add_subdirectory(examples)