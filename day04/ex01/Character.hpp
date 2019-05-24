#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character{
public:
    Character(void);
    Character(Character const & src);
    virtual~Character(void);
    Character &operator=(Character const & rhs);

    Character(std::string);

    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);

    std::string     const getName() const;
    int                   getAP() const;
    AWeapon               *getCurrentWeapon() const;

private:
    std::string _name;
    int         _AP;
    AWeapon     *_currentWeapon;
};
std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif
