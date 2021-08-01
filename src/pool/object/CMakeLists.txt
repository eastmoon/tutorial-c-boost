# Declare cmake information
cmake_minimum_required(VERSION 2.8.10)
project(example)

# Add library & classes
file(
    GLOB
    includes_library
    "classes/*.cpp"
    "classes/*.h"
)

# Add source code in project
add_executable(
    example
    main.cpp
    ${includes_library}
)
