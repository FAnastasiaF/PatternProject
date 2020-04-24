#pragma once
#include <iostream>
#include "Characters.h"


class WhiteWizard: public Wizard
{
public:
    void info();
};

class WhiteElf: public Elf
{
public:
    void info();
};

class WhiteGiant: public Giant
{
public:
    void info();
};