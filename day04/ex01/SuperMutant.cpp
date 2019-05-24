#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &src) : Enemy(src) {}

SuperMutant::~SuperMutant(void) {
 std::cout << "Aaargh ..." <<std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &) { return *this; }
