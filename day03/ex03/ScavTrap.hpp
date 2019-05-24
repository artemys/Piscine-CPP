#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <sstream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
    ScavTrap(std::string);
    ScavTrap (ScavTrap const &);
    virtual ~ScavTrap();
    ScavTrap & operator=(ScavTrap const & rhs);

    void challengeNewcomer(std::string const & target);

private:
    ScavTrap();

};
#endif
