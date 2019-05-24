#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
class Victim {
public:
    Victim();
    Victim(std::string);
    Victim(Victim const & src);
    virtual ~Victim();

    Victim &operator=(Victim const & rhs);
    std::string getName() const;
    virtual void getPolymorphed() const;

private:
    std::string _name;

};
std::ostream & operator<<(std::ostream & o, Victim const & rhs);
#endif
