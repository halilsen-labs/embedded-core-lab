cmake_minimum_required(VERSION 3.20)

project(embedded_core_lab C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_compile_options(
    -Wall
    -Wextra
    -Werror
    -Wpedantic
    -Wshadow
    -Wconversion
    -Wdouble-promotion
)

include_directories(include)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
