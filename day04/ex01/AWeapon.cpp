#include "AWeapon.hpp"
AWeapon::AWeapon(void) {}

AWeapon::AWeapon(const AWeapon &src) {
    *this = src;
}
AWeapon::~AWeapon(void) {}

AWeapon &AWeapon::operator=(const AWeapon &rhs) {
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
    this->_name   = rhs._name;

    return *this;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {

}

std::string const &AWeapon::getName() const {
    return this->_name;
}

int AWeapon::getApcost() const {
    return this->_apcost;
}

int AWeapon::getDamage() const {
    return this->_damage;
}
