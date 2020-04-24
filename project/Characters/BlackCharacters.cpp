#include "BlackCharacters.h"


void BlackWizard::info() {
    std::cout << "BlackWizard\n";
    health *= 0.8;
    power *= 1.2;
    std::cout << "health = " << health << "\n";
    std::cout << "power = " << power << "\n";
}


void BlackElf::info() {
    std::cout << "BlackElf\n";
    health *= 0.8;
    power *= 1.2;
    std::cout << "health = " << health << "\n";
    std::cout << "power = " << power << "\n";
}


void BlackGiant::info() {
    std::cout << "BlackGiant\n";
    health *= 0.8;
    power *= 1.2;
    std::cout << "health = " << health << "\n";
    std::cout << "power = " << power << "\n";
}


