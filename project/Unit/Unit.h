#pragma once
#include "../Characters/Characters.h"


class Unit
{
public:
    virtual Wizard* createWizard() = 0;
    virtual Elf* createElf() = 0;
    virtual Giant* createGiant() = 0;
    virtual ~Unit() = default;
};