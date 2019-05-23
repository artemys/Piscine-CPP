#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
class Fixed{
public:
    Fixed();
    ~Fixed();

    Fixed(Fixed const &);
    Fixed & operator=(Fixed const & rhs);

    Fixed(int const);
    Fixed(float const);

    float toFloat() const;
    int toInt() const;

    int getRawBits(void) const;
    void setRawBits(int const raw);

private:
    int _fixedPoint;
    static int const _fBits;

};
std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif