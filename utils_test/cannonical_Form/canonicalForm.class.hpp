#ifndef CANONICALFORM_HPP
#define CANONICALFORM_HPP

#include <iostream>
class Canonical{
public:
    Canonical(void);
    Canonical(Canonical const & src);
    virtual ~Canonical(void);

    Canonical &operator=(Canonical const & rhs);

    int getFoo(void) const;

private:
    int _foo;
};



#endif

std::ostream & operator<<(std::ostream & o, Canonicalconst & i);