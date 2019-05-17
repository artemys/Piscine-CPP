#include "ZombieEvent.hpp"
#include <string>
#include <iostream>
#include "Zombie.hpp"


ZombieEvent::ZombieEvent(void){}
ZombieEvent::~ZombieEvent(void){}

std::string	ZombieEvent::getZombieType() const {
	return this->_type;
}
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

Zombie *Zombie::newZombie(std::string name, std::string const zombieType){
	return new Zombie(name, zombietype);
}

void	ZombieEvent::setZombieType(std::string const zombieType){
		this->getZombieType() = zombieType;
	return;
}

Zombie	*ZombieEvent::randomChump(){
	Zombie 	*newZombie = newZombie(randomName[rand() % 11], "nya");
	newZombie->annonce();
	return(newZombie);
}