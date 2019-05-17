#include "ZombieEvent.hpp"
#include <string>
#include <iostream>
#include "Zombie.hpp"


ZombieEvent::ZombieEvent(std::string type) : _type(type){}

ZombieEvent::~ZombieEvent(void){}


std::string randomName[11] = {
	"Erre",
	"Stourie",
	"Heinoubien",
	"Sextile",
	"Einvenue",
	"Crave",
	"Polaire",
	"Fidus",
	"Nary",
	"Zar",
	"Te"
};


std::string	ZombieEvent::getZombieType() const {
	return this->_type;
}
void	ZombieEvent::setZombieType(std::string const zombieType){
		this->_type = zombieType;
	return;
}

Zombie *ZombieEvent::newZombie(std::string name){
	Zombie *newBornZombie = new Zombie(name);
	newBornZombie->setZombieType(this->_type);
	return newBornZombie;
}
void	ZombieEvent::randomChump(){
	Zombie stackZombie(randomName[rand() % 11]);
	stackZombie.setZombieType(this->_type);

	stackZombie.announce();
}