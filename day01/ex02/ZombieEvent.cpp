#include "ZombieEvent.hpp"
#include <string>
#include <iostream>
#include "Zombie.hpp"


ZombieEvent::ZombieEvent(void){}
ZombieEvent::~ZombieEvent(void){}

std::string	ZombieEvent::getZombieType() const {
	return this->_type;
}
void ZombieEvent::setZombieType(std::string const &zombieType){
		this->zombieType = v;
	return;
}