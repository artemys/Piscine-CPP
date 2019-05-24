#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
class AWeapon{
public:

    AWeapon(AWeapon const & src);
    virtual ~AWeapon(void);
    AWeapon &operator=(AWeapon const & rhs);

    AWeapon(std::string const & name, int apcost, int damage);
    std::string const & getName() const;
    int getApcost() const;
    int getDamage() const;
    virtual void attack() const = 0;

private:
    AWeapon();
    std::string _name;
    int _apcost;
    int _damage;
};


#endif
