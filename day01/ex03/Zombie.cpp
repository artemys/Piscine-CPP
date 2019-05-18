
#include "Zombie.hpp"

Zombie::Zombie(){ 
	std::cout << "New Zombie wakes up" << std::endl;
}
Zombie::~Zombie(void){
	std::cout << "The Zombie " << this->_name 
	<< " died" << std::endl;
}


void	Zombie::setZombieType(std::string const zombieType){
		this->_type = zombieType;
	return;
}
void	Zombie::setZombieName(std::string const zombieName){
		this->_name = zombieName;
	return;
}
void	Zombie::announce(void) const {
	std::cout << "<Zombie " << this->_name 
	<< "(" << this->_type 
	<< ")>"
	<< " Braaaaaaaaaaaaaaaaaaiiiiiiiiiinnnns" << std::endl;
} 