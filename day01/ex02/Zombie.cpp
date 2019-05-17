#include <iostream>
#include "Zombie.hpp"
#include <iomanip>
Zombie::Zombie(std::string name) : _name(name){ 
	std::cout << "New Zombie wakes up" << std::endl;
}
Zombie::~Zombie(void){
	std::cout << "The Zombie " << this->_name 
	<< " died" << std::endl;
}

std::string	Zombie::getZombieType() const {
	return this->_type;
}
void	Zombie::setZombieType(std::string const zombieType){
		this->_type = zombieType;
	return;
}

void	Zombie::announce(void) const {
	std::cout << "<Zombie " << this->_name 
	<< "(" << this->_type 
	<< ")>"
	<< " Braaaaaaaaaaaaaaaaaaiiiiiiiiiinnnns" << std::endl;
} 