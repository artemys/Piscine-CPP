#include "Fixed.class.hpp"
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