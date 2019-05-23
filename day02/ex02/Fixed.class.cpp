#include "Fixed.class.hpp"
#include <cmath>

int const Fixed::_fBits = 8;

Fixed::Fixed(): _fixedPoint(0) {}

Fixed::~Fixed() {}

Fixed & Fixed::operator=(Fixed const &rhs) {

    _fixedPoint = rhs.getRawBits();
    return *this;
}

Fixed::Fixed(Fixed const &rhs) {
    *this = rhs;
}

int Fixed::getRawBits(void) const {
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

bool Fixed::operator>(Fixed const &rhs) {
    return this->getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<(Fixed const &rhs) {
    return this->getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>=(Fixed const &rhs) {
    return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<=(Fixed const &rhs) {
    return this->getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator==(Fixed const &rhs) {
    return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(Fixed const &rhs) {
    return this->getRawBits() != rhs.getRawBits();
}

Fixed Fixed::operator+(Fixed const &rhs) {
    Fixed AddOverload(rhs.toFloat() + this->toFloat());
    return AddOverload;
}

Fixed Fixed::operator-(Fixed const &rhs) {
    Fixed AddOverload(rhs.toFloat() - this->toFloat());
    return AddOverload;
}

Fixed Fixed::operator*(Fixed const &rhs) {
    Fixed AddOverload(rhs.toFloat() * this->toFloat());
    return AddOverload;
}

Fixed Fixed::operator/(Fixed const &rhs) {
    Fixed AddOverload(rhs.toFloat() / this->toFloat());
    return AddOverload;
}

Fixed &Fixed::operator++() {
    this->_fixedPoint++;
    return *this;
}

Fixed const Fixed::operator++(int) {
    Fixed  preIncr(*this);
    ++*this;
    return preIncr;
}

Fixed &Fixed::operator--() {
    this->_fixedPoint--;
    return *this;
}

Fixed const Fixed::operator--(int) {
    Fixed  preIncr(*this);
    --*this;
    return preIncr;
}

Fixed const &Fixed::min(Fixed const &first, Fixed const &second) {
    if(first.getRawBits() > second.getRawBits())
        return second;
    else
        return first;
}
Fixed const &Fixed::max(Fixed const &first, Fixed const &second) {
    if(first.getRawBits() < second.getRawBits())
        return second;
    else
        return first;
}

Fixed &Fixed::min(Fixed &first, Fixed &second) {
    if (first.getRawBits() > second.getRawBits())
        return second;
    else
        return first;
}
Fixed &Fixed::max(Fixed &first, Fixed &second) {
    if (first.getRawBits() < second.getRawBits())
        return second;
    else
        return first;
}


