cmake_minimum_required(VERSION 2.8)
project(ProjectUnit)

set(SOURCES BlackUnit.cpp Unit.cpp WhiteUnit.cpp)

add_library(project_unit SHARED ${SOURCES})
target_link_libraries(project_unit project_characters)

install(TARGETS project_unit
        LIBRARY DESTINATION lib)