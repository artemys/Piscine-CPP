#include "Character.hpp"

Character::Character(void) {}

Character::Character(const Character &src) { *this = src; }

Character::~Character(void) {}

Character &Character::operator=(const Character &rhs) {
    this->_AP = rhs._AP;
    this->_name = rhs._name;
    this->_currentWeapon = rhs._currentWeapon;

    return  *this;
}

void Character::recoverAP() {
    if(this->_AP < 40)
        this->_AP = std::max(this->_AP +10, 40);
}

void Character::equip(AWeapon *currentWeapon) {
    this->_currentWeapon = currentWeapon;
}

void Character::attack(Enemy *enemy) {
    if (this->_currentWeapon == NULL || this->_AP < this->_currentWeapon->getApcost())
        return;

    this->_AP = std::max(this->_AP - _currentWeapon->getApcost(), 0);
    std::cout << this->_name << " attacks " << enemy->getType()
         << " with " << _currentWeapon->getName() << std::endl;
    this->_currentWeapon->attack();
    enemy->takeDamage(_currentWeapon->getDamage());
}

std::string const Character::getName() const {
    return this->_name;
}

int Character::getAP() const {
    return this->_AP;
}

AWeapon *Character::getCurrentWeapon() const {
    return this->_currentWeapon;
}

Character::Character(std::string name) : _name(name), _AP(40), _currentWeapon(NULL) {}

std::ostream &operator<<(std::ostream &o, Character const &rhs) {
    if(rhs.getCurrentWeapon() == NULL)
        o << rhs.getName() << " has " << rhs.getAP() << " and is unarmed" << std::endl;
    else
        o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a "
            << rhs.getCurrentWeapon()->getName() << std::endl ;
    return o;
}
