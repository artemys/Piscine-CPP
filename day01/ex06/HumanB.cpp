
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string humanbName) : _name(humanbName) {

}
HumanB::~HumanB(){}

void HumanB::attack() const {
    std::cout << this->_name
              << " attacks with his "
              << this->_weapon->getType()
              << std::endl;
}

void HumanB::setWeapon(Weapon &humanbWeapon) {
    this->_weapon = &humanbWeapon;
}