#include "ArmyCreate.h"


void ArmyCreate::AddBlackUnit(std::string unit) {
    std::shared_ptr<FactoryUnit> blackfactory = std::make_shared<FactoryBlack>();
    if(unit == "Wizard") {
        army.push_back(blackfactory->CreateWizard());
    } else if(unit == "Elf") {
        army.push_back(blackfactory->CreateElf());
    } else if (!(unit == "Giant")) {
        std::cout << "Wrong name unit. Try again.\n";
    } else {
        army.push_back(blackfactory->CreateGiant());
    }
}

void ArmyCreate::AddWhiteUnit(std::string unit) {
    std::shared_ptr<FactoryUnit> whitefactory = std::make_shared<FactoryWhite>();
    if(unit == "Wizard") {
        army.push_back(whitefactory->CreateWizard());
    } else if(unit == "Elf") {
        army.push_back(whitefactory->CreateElf());
    } else if(unit == "Giant") {
        army.push_back(whitefactory->CreateGiant());
    } else {
        std::cout <<"Wrong name unit. Try again.\n";
    }
}

void ArmyCreate::info() {
    for (int i = 0; i < army.size(); ++i) {
        if(std::dynamic_pointer_cast<Wizard>(army[i])) {
            std::cout << "Wizard\n";
        } else if(std::dynamic_pointer_cast<Elf>(army[i])) {
            std::cout << "Elf\n";
        } else {
            std::cout << "Giant\n";
        }
        std::cout << "Health = " << army[i]->health() << std::endl;
        std::cout << "Power = " << army[i]->power() << std::endl;
    }
}