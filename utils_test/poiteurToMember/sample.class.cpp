#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void) : foo(0){
	std::cout << "constructor called" << std::endl;
	return;
}

Sample::~Sample(void){
	std::cout << "destructor called" << std::endl;
	return;
}

void Sample::bar(void) const{
	std::cout << "bar called" << std::endl;
	return;
}