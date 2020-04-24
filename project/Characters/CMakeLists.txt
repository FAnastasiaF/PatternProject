cmake_minimum_required(VERSION 2.8)

project(ProjectCharacters)

set(
        SOURCES
        BlackCharacters.cpp
        Characters.cpp
        WhiteCharacters.cpp
)

add_library(project_characters SHARED ${SOURCES})

install(TARGETS project_characters
        LIBRARY DESTINATION lib)