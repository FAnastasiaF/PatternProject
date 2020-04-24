#include <iostream>
#include "ArmyCreation/Game.h"
#include "Unit/BlackUnit.h"
#include "Unit/WhiteUnit.h"


int main()
{
    int numberunit;
    std::string side;
    std::string unit;
    Game game;
    Army* army = new Army;
    std::cout << "Choose side: Black or White\n";
    std::cin >> side;
    if(side == "Black") {
        BlackUnit blackarmy;
        Army * black = army;
        std::cout << "How many units do you want to create?\n";
        std::cin >> numberunit;
        std::cout << "Choose " << numberunit << " unit: Wizard, Elf or Giant\n";
        for(int j = 0; j < numberunit; ++j) {
            std::cin >> unit;
            black = game.createUnit(blackarmy, *army, unit);
        }
        std::cout << "Black army:\n";
        black->info();
    } else if(side == "White") {
        WhiteUnit whitearmy;
        Army * white = army;
        std::cout << "How many units do you want to create?\n";
        std::cin >> numberunit;
        std::cout << "Choose " << numberunit << " unit: Wizard, Elf or Giant\n";
        for(int j = 0; j < numberunit; ++j) {
            std::cin >> unit;
            white = game.createUnit(whitearmy, *army, unit);
        }
        std::cout << "White army:\n";
        white->info();
    } else {
        std::cout << "There is no such side";
    }
    return 0;
}
