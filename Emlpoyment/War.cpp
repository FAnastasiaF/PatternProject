#include "War.h"

int War::start(Army army) {
    if(army.health() > 800 || army.power() > 200) {
        return 2;
    } else {
        return 0;
    }
}
