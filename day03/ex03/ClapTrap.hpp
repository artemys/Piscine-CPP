#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <sstream>

class ClapTrap {
public:
    ClapTrap(std::string);
    ClapTrap (ClapTrap const &);
    virtual ~ClapTrap();
    ClapTrap & operator=(ClapTrap const & rhs);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap(unsigned int, unsigned int, unsigned int,
             unsigned int, unsigned int, std::string,
             unsigned int, unsigned int, unsigned int);

protected:
    unsigned int _HP;
    unsigned int _maxHP;
    unsigned int _EP;
    unsigned int _maxEP;
    unsigned int _lvl;
    std::string  _name;
    unsigned int _meleeAD;
    unsigned int _rangedAD;
    unsigned int _armorDR;

    std::string display(void) const;

private:
    ClapTrap();

};
#endif
