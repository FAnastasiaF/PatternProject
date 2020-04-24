#include "WhiteUnit.h"

Wizard* WhiteUnit::createWizard() {
    return new WhiteWizard;
}

Elf* WhiteUnit::createElf() {
    return new WhiteElf;
}

Giant* WhiteUnit::createGiant() {
    return new WhiteGiant;
}
