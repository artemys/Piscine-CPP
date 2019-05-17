#include <iostream>
#include "Zombie.hpp"
#include <iomanip>
Zombie::Zombie(void){ 
	std::cout << "New Zombie wakes up" << std::endl;
}
Zombie::~Zombie(void){
	std::cout << "The Zombie " << this->_name 
	<< " died" << std::endl;
}
	
void	Zombie::annonce(void) const {
	std::cout << "<" <<  std::setw(10) << this->_name 
	<< "(" <<  std::setw(10) << this->_type 
	<< ")>"
	<< " Braaaaaaaaaaaaaaaaaaiiiiiiiiiinnnns" << std::endl;
} 