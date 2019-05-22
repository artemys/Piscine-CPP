#ifndef FRAGTRAP_HPP
 #define FRAGTRAP_HPP
#include "ClapTrap.hpp"

#include <string>
#include <iostream>
#include <sstream>

 class FragTrap : public ClapTrap {
 public:
     FragTrap(std::string);
     FragTrap (FragTrap const &);
     ~FragTrap();
    FragTrap & operator=(FragTrap const & rhs);

     void vaulthunter_dot_exe(std::string const & target);

 };
#endif
