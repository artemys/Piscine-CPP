#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src) : AWeapon(src) {}
PlasmaRifle::~PlasmaRifle(void) {}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &) { return *this; }

void PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {

}
