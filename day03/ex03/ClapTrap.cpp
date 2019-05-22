#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :   _HP(100), _maxHP(100), _EP(100), _maxEP(100), _lvl(1),
                                         _name(name), _meleeAD(30), _rangedAD(20),_armorDR(5){
    std::cout << "Constructor ClapTrap called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(unsigned int HP, unsigned int maxHP, unsigned int EP, unsigned int maxEP, unsigned int lvl, std::string name, unsigned int meleeAD,
                   unsigned int rangedAD, unsigned int armorDR) : _HP(HP), _maxHP(maxHP), _EP(EP), _maxEP(maxEP), _lvl(lvl),
                                                                  _name(name), _meleeAD(meleeAD), _rangedAD(rangedAD), _armorDR(armorDR) {

}

std::string ClapTrap::display() const{
    std::ostringstream oss;
    std::string toDisplay;

    oss << this;

    toDisplay = "FR4G-TP " + oss.str() + " " + this->_name ;
    return (toDisplay);
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
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

void ClapTrap::rangedAttack(std::string const &target) {

    std::cout << this->display() << " attacks "
              << target
              << " at range, causing "
              << this->_rangedAD
              << " points damage !"
              << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target) {
    std::cout << this->display() << " attacks "
              << target
              << " at melee, causing "
              << this->_meleeAD
              << " points damage !"
              << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_armorDR >= amount)
        amount = 0;
    else
        amount -= this->_armorDR;

    if (this->_HP == 0)
        std::cout << this->display()
                  << " are already dead" << std::endl;

    else if (amount >= this->_HP)
        std::cout << this->display()
                  << " hitpoint was at "
                  << this->_HP
                  << " you took "
                  << amount
                  << ". You just died"
                  << std::endl;

    else {
        this->_HP -= amount;
        std::cout << this->display()
                  << " took "
                  << amount
                  << " damage. You're current hp is at "
                  << this->_HP
                  << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (this->_HP + amount >= this->_maxHP)
        this->_HP = this->_maxHP;
    else if (this->_HP == 0)
        std::cout << this->display()
                  << " are already dead. You can't repair yourself" << std::endl;
    else
        this->_HP += amount;
    std::cout << this->display()
              << " repaired "
              << amount
              << " hp. You're current hp is at "
              << this->_HP
              << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
    std::cout << "ClapTrap Copy Constructor Called" << std::endl;
    *this  = src;
}
