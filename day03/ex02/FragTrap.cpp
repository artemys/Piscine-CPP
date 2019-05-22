#include "FragTrap.hpp"

std::string randomAttackName[5] = {
      "EnergyAttack1",
      "EnergyAttack2",
      "EnergyAttack3",
      "EnergyAttack4",
      "EnergyAttack5",
};

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5) {
    std::cout << "Constructor FragTrap called" << std::endl;

}

FragTrap::~FragTrap() {
    std::cout << "Destructor FragTrap called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
    this->_HP    = rhs._HP;
    this->_maxHP = rhs._maxHP;
    this->_EP    = rhs._EP;
    this->_maxEP = rhs._maxEP;
    this->_lvl   = rhs._lvl;
    this->_meleeAD  = rhs._meleeAD;
    this->_rangedAD = rhs._rangedAD;
    this->_armorDR  = rhs._armorDR;

    return *this;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
        if (this->_EP < 25)
            std::cout << "You don't have enough energy point to launch the special attack" << std::endl;
        else {
            this->_EP -= 25;
           std::cout << this->display()
                     << " launch the "
                     << randomAttackName[rand() %5]
                     << " attack on "
                     << target
                     << std::endl;
        }
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {

    std::cout << "Copy constructor called" << std::endl;
    *this = src;

}



