#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(const PowerFist &src) : AWeapon(src){ }

PowerFist::~PowerFist() {}

PowerFist &PowerFist::operator=(const PowerFist &rhs) { return *this; }

void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" <<std::endl;
}
