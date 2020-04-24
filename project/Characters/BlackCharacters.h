#pragma once
#include <iostream>
#include "Characters.h"

class BlackWizard: public Wizard
{
public:
    void info();
};

class BlackElf: public Elf
{
public:
    void info();
};

class BlackGiant: public Giant
{
public:
    void info();
};

