#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "../Units/Unit.h"
#include "../Factories/FactoryUnit.h"
#include "../Factories/FactoryBlack.h"
#include "../Factories/FactoryWhite.h"

class ArmyCreate {
    std::vector<std::shared_ptr<Unit>> army;
public:
    void AddBlackUnit(std::string unit);
    void AddWhiteUnit(std::string unit);
    void info();
};

