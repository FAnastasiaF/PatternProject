#include "Army.h"

void Army::info() {
    if (wizard.size() != 0) {
        std::cout << wizard.size() << " ";
        wizard[0]->info();
    }
    if (elf.size() != 0) {
        std::cout << elf.size() << " ";
        elf[0]->info();
    }
    if (giant.size() != 0) {
        std::cout << giant.size() << " ";
        giant[0]->info();
    }
}
