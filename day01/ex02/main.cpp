#include "ZombieEvent.hpp"
#include <string>
#include <iostream>
#include "Zombie.hpp"

int main(){


	ZombieEvent secondeZombieWave("Skoliosexuel");
	secondeZombieWave.randomChump();

	ZombieEvent *firstZombieWave = new ZombieEvent("CPUsexuel");
	firstZombieWave->randomChump();
	
	Zombie *firstZombie = firstZombieWave->newZombie("Nouze");
	firstZombie->announce();

	delete firstZombieWave;
	delete firstZombie;

	return 0;
}