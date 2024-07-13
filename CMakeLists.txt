cmake_minimum_required(VERSION 3.10)

project("TEL23A - Inf2 - Probeklausur" LANGUAGES CXX)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_COMPILE_WARNING_AS_ERROR ON)
set(CMAKE_CXX_STANDARD 20)

include(CTest)
include_directories(testtools)
add_subdirectory(testtools)

add_subdirectory(probe_labor)

cmake_path(SET GITIGNORE_FILE NORMALIZE "${CMAKE_BINARY_DIR}/.gitignore")
file(WRITE ${GITIGNORE_FILE} "*")
