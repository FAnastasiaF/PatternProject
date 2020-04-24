cmake_minimum_required(VERSION 2.8)
project(ProjectArmy)

set(SOURCES ../Characters/BlackCharacters.cpp ../Characters/WhiteCharacters.cpp ../Characters/Characters.cpp Army.cpp Game.cpp)

add_library(army SHARED ${SOURCES})

install(TARGETS army
        LIBRARY DESTINATION lib
        )