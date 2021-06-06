cmake_minimum_required(VERSION 3.1)

project(Lab3)

get_filename_component(ROOT ${CMAKE_CURRENT_SOURCE_DIR} PATH)

set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -gtest -Wall -fconcepts --pedantic" )

include_directories(${ROOT}/helloworld/include)
set( helloworld "${PROJECT_SOURCE_DIR}/ForTest.cpp" )

add_executable( ${PROJECT_NAME} ${helloworld} )