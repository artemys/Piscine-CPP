#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
 class HumanB {
 public:
     HumanB(std::string);

     ~HumanB();
     void    attack() const;
     void    setWeapon(Weapon &);

 private:
    Weapon *_weapon;
    std::string _name;


};

#endif
