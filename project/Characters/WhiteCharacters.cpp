#include "WhiteCharacters.h"

void WhiteWizard::info() {
    std::cout << "WhiteWizard\n";
    health *= 1.2;
    power *= 0.8;
    std::cout << "health = " << health << "\n";
    std::cout << "power = " << power << "\n";
}

void WhiteElf::info() {
    std::cout << "WhiteElf\n";
    health *= 1.2;
    power *= 0.8;
    std::cout << "health = " << health << "\n";
    std::cout << "power = " << power << "\n";
}
void WhiteGiant::info() {
    std::cout << "WhiteGiant\n";
    health *= 1.2;
    power *= 0.8;
    std::cout << "health = " << health << "\n";
    std::cout << "power = " << power << "\n";
}