#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "Creation/ArmyCreate.h"

int main() {
    ArmyCreate Army;
    int numberunit;
    std::string unit;
    std::string side;
    std::cout << "Choose side: Black or White\n";
    std::cin >> side;
    if(side == "Black") {
        std::cout << "How many units do you want to create?\n";
        std::cin >> numberunit;
        std::cout << "Choose " << numberunit << " unit: Wizard, Elf or Giant\n";
        for (int i = 0; i < numberunit; ++i) {
            std::cin >> unit;
            Army.AddBlackUnit(unit);
        }
    } else if (side == "White") {
        std::cout << "How many units do you want to create?\n";
        std::cin >> numberunit;
        std::cout << "Choose " << numberunit << " unit: Wizard, Elf or Giant\n";
        for (int i = 0; i < numberunit; ++i) {
            std::cin >> unit;
            Army.AddWhiteUnit(unit);
        }
    } else {
        std :: cout << "Wrong side";
    }
    Army.info();
    return 0;
}
