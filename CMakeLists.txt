cmake_minimum_required(VERSION 4.1)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

file(GLOB children RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}/questoes ${CMAKE_CURRENT_SOURCE_DIR}/questoes/*)
foreach(child ${children})
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/questoes/${child})
        if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/questoes/${child}/main.c)
            add_executable(${child} questoes/${child}/main.c)
        endif()
    endif()
endforeach()
