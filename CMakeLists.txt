cmake_minimum_required(VERSION 3.3)
project(Fun_Projects)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(SOURCE_FILES SelfPrintingProgram.c)
add_executable(Fun_Projects ${SOURCE_FILES})