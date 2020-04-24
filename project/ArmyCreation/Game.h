#pragma once
#include <iostream>
#include "Army.h"
#include "../Unit/Unit.h"


class Game
{
public:
    Army* createUnit(Unit& unit, Army& army, std::string name);
};