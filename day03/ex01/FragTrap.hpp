#ifndef FRAGTRAP_HPP
 #define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <cstdlib>

 class FragTrap {
 public:
     FragTrap(std::string);
     FragTrap (FragTrap const &);
     virtual ~FragTrap();
    FragTrap & operator=(FragTrap const & rhs);

     void rangedAttack(std::string const & target);
     void meleeAttack(std::string const & target);
     void takeDamage(unsigned int amount);
     void beRepaired(unsigned int amount);
     void vaulthunter_dot_exe(std::string const & target);


 private:
     FragTrap();
     unsigned int _hitPoints;
     unsigned int _maxHitPoints;
     unsigned int _energyPoints;
     unsigned int _maxEnergyPoints;
     unsigned int _level;
     std::string  _name;
     unsigned int _meleeAttackDamage;
     unsigned int _rangedAttackDamage;
     unsigned int _armorDamageReduction;

     std::string display(void) const;


 };
#endif
