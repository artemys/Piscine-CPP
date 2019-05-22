#ifndef CANONICALFORM_HPP
#define CANONICALFORM_HPP

#include <iostream>
class Canonical{
public:
    Canonical(void);                    //Canonical
    Canonical(Canonical const & src);   //Canonical
    ~Canonical(void);                   //Canonical

    Canonical &operator=(Canonical const & rhs); //Canonical

    int getFoo(void) const;

private:
    int _foo;
};



#endif

std::ostream & operator<<(std::ostream & o, Canonicalconst & i);