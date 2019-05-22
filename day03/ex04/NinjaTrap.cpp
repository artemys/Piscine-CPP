#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0){
    std::cout << "Constructor Ninja called" << std::endl;

}

NinjaTrap::NinjaTrap(NinjaTrap const &src) : ClapTrap(src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}
NinjaTrap::~NinjaTrap() {
    std::cout << "Destructor NinjaTrap called" << std::endl;

}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs) {
    this->_HP       = rhs._HP;
    this->_maxHP    = rhs._maxHP;
    this->_EP       = rhs._EP;
    this->_maxEP    = rhs._maxEP;
    this->_lvl      = rhs._lvl;
    this->_meleeAD  = rhs._meleeAD;
    this->_rangedAD = rhs._rangedAD;
    this->_armorDR  = rhs._armorDR;

    return *this;
}

void NinjaTrap::ninjaShoebox(ClapTrap const &) {
    std::cout << "ninjaShoebox on ClapTrap mdrlolxd"  << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &) {
    std::cout << "ninjaShoebox on NinjaTrap mdrlolxd"  << std::endl;

}

void NinjaTrap::ninjaShoebox(ScavTrap const &) {
    std::cout << "ninjaShoebox on ScavTrap mdrlolxd"  << std::endl;

}

void NinjaTrap::ninjaShoebox(FragTrap const &) {
    std::cout << "ninjaShoebox on FragTrap mdrlolxd"  << std::endl;

}
