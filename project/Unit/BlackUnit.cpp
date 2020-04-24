#include "BlackUnit.h"

Wizard* BlackUnit::createWizard() {
    return new BlackWizard;
}

Elf* BlackUnit::createElf() {
    return new BlackElf;
}

Giant* BlackUnit::createGiant() {
    return new BlackGiant;
}