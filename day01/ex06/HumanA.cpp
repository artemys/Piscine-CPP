#include "HumanA.hpp"

HumanA::HumanA(std::string humanaName, Weapon &humanaWeapon) : _name(humanaName), _weapon(humanaWeapon){}

HumanA::~HumanA() {}

void HumanA::attack() const {
    std::cout << this->_name
        << " attacks with his "
        << this->_weapon.getType()
        << std::endl;
}