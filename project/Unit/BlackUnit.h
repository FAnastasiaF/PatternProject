#pragma once
#include "Unit.h"
#include "../Characters/BlackCharacters.h"


class BlackUnit: public Unit
{
public:
    Wizard* createWizard();
    Elf* createElf();
    Giant* createGiant();
};
