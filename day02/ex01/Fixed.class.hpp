#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
class Fixed{
public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const &);
    Fixed(int);
    Fixed & operator=(Fixed const & rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);

private:
    int _fixedPoint;
    static int const _fBits = 8;

};
#endif