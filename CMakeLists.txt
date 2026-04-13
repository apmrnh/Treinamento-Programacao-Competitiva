cmake_minimum_required(VERSION 4.1)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

file(GLOB children RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/*)
foreach(child ${children})
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${child})
        if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${child}/main.cpp)
            add_executable(${child} ${child}/main.cpp)
        endif()
    endif()
endforeach()
