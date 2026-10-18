cmake_minimum_required(VERSION 3.28)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(ModulyClang CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(program)

target_sources(program
    PRIVATE
        main.cpp
        player.cpp
    PRIVATE
    FILE_SET CXX_MODULES FILES
        maths.cppm
        player.cppm
        better_maths.cppm
        maths_helper.cppm
        i_like_dots.cppm
        import_module.cppm
)