#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name) {
    std::cout << "Constructor SuperTrap called" << std::endl;
    this->_HP = 100;
    this->_maxHP = 100;
    this->_EP = 120;
    this->_maxEP = 120;
    this->_lvl = 1;
    this->_meleeAD = 60;
    this->_rangedAD = 20;
    this->_armorDR = 5;

}

SuperTrap::SuperTrap(const SuperTrap &src) : ClapTrap(src), NinjaTrap(src), FragTrap(src){
    std::cout << "Copy Constructor SuperTrap called" << std::endl;
    *this = src;
}

SuperTrap::~SuperTrap() {
 std::cout << "Destructor SuperTrap called" << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &rhs) {
    this->_HP            = rhs._HP;
    this->_maxHP         = rhs._maxHP;
    this->_EP            = rhs._EP;
    this->_maxEP         = rhs._maxEP;
    this->_lvl           = rhs._lvl;
    this->_meleeAD       = rhs._meleeAD;
    this->_rangedAD      = rhs._rangedAD;
    this->_armorDR       = rhs._armorDR;

    return *this;
}
void SuperTrap::rangedAttack(std::string const &target) {
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target) {
    NinjaTrap::meleeAttack(target);
}
