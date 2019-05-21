#include <iostream>
#include "Integer.class.hpp"

Integer::Integer(int const n) : _n(n){
	std::cout << "constructor called" << n << std::endl;
	return;
}
Integer::~Integer(int const n) : _n(n){
	std::cout << "destructor called" << n << std::endl;
	return;
}

int Integer::getValue(void)const{
	return this->_n;
}

Integer	Integer::operator=(Integer const & rhs) const {
	std::cout << "assignation operator called from " <<this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	return this;
}

Integer Integer::operator+(Integer const & rhs) const {
	std::cout << "addition operator called with" << this->_n;
	std::cout << " and " << rhs.getValue() << std::end;l;

	return Integer(this->_n rhs.getValue());
}

Integer &Integer::operator=(Integer const &rhs) {
    return <#initializer#>;
}
