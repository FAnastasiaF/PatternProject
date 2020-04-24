#pragma once
#include "Unit.h"
#include "../Characters/WhiteCharacters.h"

class WhiteUnit: public Unit
{
public:
    Wizard* createWizard();
    Elf* createElf();
    Giant* createGiant();
};