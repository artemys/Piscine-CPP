#include "FragTrap.hpp"

std::string randomAttackName[5] = {
      "icardie",
      "nya",
      "keks"
      "lol",
      "mdr"
};

FragTrap::FragTrap(std::string name) :  _hitPoints(100),
                                        _maxHitPoints(100), _energyPoints(100),
                                        _maxEnergyPoints(100), _level(1),
                                        _name(name),
                                        _meleeAttackDamage(30),
                                        _rangedAttackDamage(20),
                                        _armorDamageReduction(5){
    std::cout << "Constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "Destructor called" << std::endl;
}

std::string FragTrap::display() const{
    std::ostringstream oss;
    std::string toDisplay;

    oss << this;

    toDisplay = "FR4G-TP " + oss.str() + " " + this->_name ;
    return (toDisplay);
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
    this->_hitPoints            = rhs._hitPoints;
    this->_maxHitPoints         = rhs._maxHitPoints;
    this->_energyPoints         = rhs._energyPoints;
    this->_maxEnergyPoints      = rhs._maxEnergyPoints;
    this->_level                = rhs._level;
    this->_meleeAttackDamage    = rhs._meleeAttackDamage;
    this->_rangedAttackDamage   = rhs._rangedAttackDamage;
    this->_armorDamageReduction = rhs._armorDamageReduction;

    return *this;
}

void FragTrap::rangedAttack(std::string const &target) {

    std::cout << this->display() << " attacks "
    << target
    << " at range, causing "
    << this->_rangedAttackDamage
    << " points damage !"
    << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) {
    std::cout << this->display() << " attacks "
    << target
    << " at melee, causing "
    << this->_meleeAttackDamage
    << " points damage !"
    << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
    if (this->_armorDamageReduction >= amount)
        amount = 0;
    else
        amount -= this->_armorDamageReduction;

    if (this->_hitPoints == 0)
        std::cout << this->display()
        << " are already dead" << std::endl;

    else if (amount >= this->_hitPoints)
        std::cout << this->display()
        << " hitpoint was at "
        << this->_hitPoints
        << " you took "
        << amount
        << ". You just died"
        << std::endl;

    else {
        this->_hitPoints -= amount;
        std::cout << this->display()
        << " took "
        << amount
        << " damage. You're current hp is at "
        << this->_hitPoints
        << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount) {

    if (this->_hitPoints + amount >= this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
    else if (this->_hitPoints == 0)
        std::cout << this->display()
                  << " are already dead. You can't repair yourself" << std::endl;
    else
        this->_hitPoints += amount;
        std::cout << this->display()
                  << " repaired "
                  << amount
                  << " hp. You're current hp is at "
                  << this->_hitPoints
                  << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
        if (this->_energyPoints < 25)
            std::cout << "You don't have enough energy point to launch the special attack" << std::endl;
        else {
            this->_energyPoints -= 25;
           std::cout << this->display()
                     << " launch the "
                     << randomAttackName[rand() % 5]
                     << " attack on "
                     << target
                     << std::endl;
        }
}

FragTrap::FragTrap(FragTrap const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}
