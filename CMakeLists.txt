cmake_minimum_required(VERSION 3.16)
# Required for the sbs_target function
include(libs/boardcore/cmake/sbs.cmake)

project(LIS3DSH-Driver)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp")
add_executable(main ${SOURCES})
target_include_directories(main PRIVATE ${CMAKE_SOURCE_DIR}/libs/boardcore/src/shared)
sbs_target(main stm32f407vg_stm32f4discovery)
