#pragma once
#include <iostream>
#include "../Characters/Characters.h"
#include <vector>


class Army
{
public:
    ~Army() {
        for(int i = 0; i<wizard.size(); ++i) {
            delete wizard[i];
        }
        for(int i = 0; i<elf.size(); ++i) {
            delete elf[i];
        }
        for(int i = 0; i<giant.size(); ++i) {
            delete giant[i];
        }
    }
    void info();
    std::vector<Wizard*> wizard;
    std::vector<Elf*> elf;
    std::vector<Giant*> giant;
};