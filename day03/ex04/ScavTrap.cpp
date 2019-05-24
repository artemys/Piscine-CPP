
#include "ScavTrap.hpp"

std::string randomChallenge[5] = {
        "Challenge1",
        "Challenge2",
        "Challenge3",
        "Challenge4",
        "Challenge5"
};

ScavTrap::ScavTrap(std::string name) :  ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3){
    std::cout << "Constructor ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor ScavTrap called" << std::endl;
}


ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
    this->_HP            = rhs._HP;
    this->_maxHP         = rhs._maxHP;
    this->_EP         = rhs._EP;
    this->_maxEP      = rhs._maxEP;
    this->_lvl                = rhs._lvl;
    this->_meleeAD    = rhs._meleeAD;
    this->_rangedAD   = rhs._rangedAD;
    this->_armorDR = rhs._armorDR;

    return *this;
}


void ScavTrap::challengeNewcomer(std::string const &target) {
    if (this->_EP < 25)
        std::cout << "You don't have enough energy point to launch the special attack" << std::endl;
    else {
        this->_EP -= 25;
        std::cout << this->display()
                  << " challenge "
                    << target
                  << " you to do the "
                  << randomChallenge[rand() % 5]
                  << std::endl;
    }
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}


