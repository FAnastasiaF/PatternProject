cmake_minimum_required(VERSION 2.8)
project(project)

set(CMAKE_CXX_STANDARD 14)

add_executable(project main.cpp)
add_subdirectory(ArmyCreation)
add_subdirectory(Characters)
add_subdirectory(Unit)

set(ADDITIONAL_LIBRARIES project_characters project_unit army)

target_link_libraries(project ${ADDITIONAL_LIBRARIES})
