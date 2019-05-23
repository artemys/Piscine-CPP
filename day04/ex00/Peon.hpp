#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public virtual Victim {
public:
    Peon(std::string);
    Peon(Peon const & src);
    ~Peon();
    Peon &operator=(Peon const & rhs);
    void getPolymorphed() const;

};

#endif