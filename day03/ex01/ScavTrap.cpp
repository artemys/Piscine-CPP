#include "ScavTrap.hpp"

std::string randomChallenge[5] = {
        "Challenge1",
        "Challenge2",
        "Challenge3",
        "Challenge4",
        "Challenge5"
};

ScavTrap::ScavTrap(std::string name) :   _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1),
                                         _name(name), _meleeAttackDamage(20), _rangedAttackDamage(15),_armorDamageReduction(3){
    std::cout << "Constructor ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor ScavTrap called" << std::endl;
}

std::string ScavTrap::display() const{
    std::ostringstream oss;
    std::string toDisplay;

    oss << this;

    toDisplay = "FR4G-TP " + oss.str() + " " + this->_name ;
    return (toDisplay);
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
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

void ScavTrap::rangedAttack(std::string const &target) {

    std::cout << this->display() << " attacks "
              << target
              << " at range, causing "
              << this->_rangedAttackDamage
              << " points damage !"
              << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) {
    std::cout << this->display() << " attacks "
              << target
              << " at melee, causing "
              << this->_meleeAttackDamage
              << " points damage !"
              << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
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

void ScavTrap::beRepaired(unsigned int amount) {

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

void ScavTrap::challengeNewcomer(std::string const &target) {
    if (this->_energyPoints < 25)
        std::cout << "You don't have enough energy point to launch the special attack" << std::endl;
    else {
        this->_energyPoints -= 25;
        std::cout << this->display()
                  << " challenge "
                    << target
                  << " you to do the "
                  << randomChallenge[rand() % 5]
                  << std::endl;
    }
}

ScavTrap::ScavTrap(ScavTrap const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}


