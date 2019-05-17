#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void){}
Zombie::~Zombie(void){}

void	Zombie::annonce(std::string name, std::string type) 
	: _name(name), _type(type) const {
	std::cout << "<" <<  std::setw(10) << this->name 
	<< "(" <<  std::setw(10) << this->type 
	<< ")>"
	<< " Braaaaaaaaaaaaaaaaaaiiiiiiiiiinnnns" << std::endl;
} 