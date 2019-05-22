#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <string>
#include <iostream>
#include <sstream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public virtual ClapTrap {
public:
    NinjaTrap(std::string);
    NinjaTrap (NinjaTrap const &);
    virtual ~NinjaTrap();
    NinjaTrap & operator=(NinjaTrap const & rhs);

    void ninjaShoebox(ClapTrap  const & );
    void ninjaShoebox(NinjaTrap  const & );
    void ninjaShoebox(ScavTrap  const & );
    void ninjaShoebox(FragTrap  const & );

};
#endif
