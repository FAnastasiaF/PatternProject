#include "Game.h"

Army* Game::createUnit(Unit &unit, Army &army, std::string name) {
    if(name == "Wizard") {
        army.wizard.push_back(unit.createWizard());
    }else if(name == "Elf") {
        army.elf.push_back(unit.createElf());
    }else if(name == "Giant") {
        army.giant.push_back(unit.createGiant());
    }else {
        std::cout << "Wrong unit name";
        exit(0);
    }
    return &army;
}
