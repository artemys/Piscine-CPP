#include "Fixed.class.hpp"
#include <cmath>

int const Fixed::_fBits = 8;

Fixed::Fixed(): _fixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;

}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &rhs) {
    std::cout << "Assignation operator called" << std::endl;

    _fixedPoint = rhs.getRawBits();
    return *this;
}

Fixed::Fixed(Fixed const &rhs) {
    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;

    return _fixedPoint;
}

void Fixed::setRawBits(int const raw) {
    _fixedPoint = raw;
}

Fixed::Fixed(int const n) {
    this->_fixedPoint = n * (1 << Fixed::_fBits);
}

Fixed::Fixed(float const f) {
   this->_fixedPoint = static_cast<int>(roundf(f * (1 << Fixed::_fBits)));
}

float Fixed::toFloat() const {
    return static_cast<float>(this->_fixedPoint) / (1 << Fixed::_fBits);
}

int Fixed::toInt() const {
    return  this->_fixedPoint >> Fixed::_fBits;
}
std::ostream & operator<<(std::ostream & o,Fixed const & rhs){
    o << rhs.toFloat();
    return o;
}
