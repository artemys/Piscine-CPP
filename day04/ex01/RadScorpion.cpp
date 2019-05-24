#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion"){
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &src) : Enemy(src){}

RadScorpion::~RadScorpion(void) {
    std::cout << "“* SPROTCH *" << std::endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &rhs) { return *this; }

void RadScorpion::takeDamage(int damage) {
    Enemy::takeDamage(damage - 3);
}

