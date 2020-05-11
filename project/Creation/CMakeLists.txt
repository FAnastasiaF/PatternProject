cmake_minimum_required(VERSION 2.8)
project(Creation)

set(SOURSES ../Factories/FactoryUnit.cpp ../Units/Unit.cpp ../Factories/FactoryBlack.cpp ../Factories/FactoryWhite.cpp ArmyCreate.cpp)

add_library(creation SHARED ${SOURSES})

install(TARGETS creation
        LIBRARY DESTINATION lib
        )