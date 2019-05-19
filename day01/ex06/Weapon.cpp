#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) : _type(weaponType){
    setType(weaponType);
}
Weapon::~Weapon() {}

std::string const Weapon::getType() {
    return this->_type;
}
void Weapon::setType(std::string type) {
    this->_type = type;
}