#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <string>
#include <iostream>
#include <sstream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : public virtual NinjaTrap, public virtual FragTrap {
public:
    SuperTrap(std::string);
    SuperTrap(SuperTrap const &);
    ~SuperTrap();
    SuperTrap &operator=(SuperTrap const &rhs);

    void rangedAttack(std::string const &);
    void meleeAttack(std::string const &);

};
#endif
