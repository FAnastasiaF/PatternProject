cmake_minimum_required(VERSION 2.8)
project(project)

set(CMAKE_CXX_STANDARD 14)

add_executable(project main.cpp)
add_subdirectory(Creation)
add_subdirectory(Factories)
add_subdirectory(Units)

set(ADDITIONAL_LIBRARIES units factories creation)

target_link_libraries(project ${ADDITIONAL_LIBRARIES})