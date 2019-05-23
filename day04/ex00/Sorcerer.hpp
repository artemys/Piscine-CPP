#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"
class Sorcerer {

public:
    Sorcerer(std::string , std::string);
    Sorcerer(Sorcerer const & src);
    virtual ~Sorcerer();
    Sorcerer &operator=(Sorcerer const & rhs);
    std::string getName() const;
    std::string getTitle() const;
    void polymorph(Victim const &);

private:
   std::string _name;
   std::string _title;
   Sorcerer();

};
std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);
#endif
