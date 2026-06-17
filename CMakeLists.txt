cmake_minimum_required(VERSION 3.10)
project(multi_file_project)

set(CMAKE_CXXX_STANDART 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB SOURCES "*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})