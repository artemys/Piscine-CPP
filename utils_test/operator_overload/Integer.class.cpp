#include <iostream>
#include "Integer.class.hpp"

Integer::Integer(int const n) : _n(n){
	std::cout << "constructor called" << n << std::endl;
	return;
}
Integer::~Integer(){
	std::cout << "destructor called" << std::endl;
	return;
}


Integer	& Integer::operator=(Integer const & rhs)  {
	std::cout << "assignation operator called from " <<this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();
	return *this;
}

Integer Integer::operator+(Integer const & rhs) const {
	std::cout << "addition operator called with" << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;

	return Integer(this->_n + rhs.getValue());
}

int Integer::getValue(void) const {
    return this->_n;
}

std::ostream & operator<<(std::ostream & o,Integer const & rhs){
    o << rhs.getValue();
    return o;
}