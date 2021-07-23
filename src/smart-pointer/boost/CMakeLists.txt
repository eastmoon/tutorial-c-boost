cmake_minimum_required(VERSION 2.8.10)
project(example)
file(
    GLOB
    includes_library
    "classes/*.cpp"
    "classes/*.h"
)
add_executable(
    example
    main.cpp
    ${includes_library}
)
