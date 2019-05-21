#include "ZombieHorde.hpp"
#include "Zombie.hpp"


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

ZombieHorde::ZombieHorde(int  n){
	Zombie *zombieWave = new Zombie[n];
	this->_n = n;
	this->_wave = zombieWave;
	for (int i = 0; i < n; ++i)
	{
		zombieWave[i].setZombieName(randomName[rand() % 11]);
		zombieWave[i].setZombieType("Windowsexuel");
		zombieWave[i].announce();
	}
}

ZombieHorde::~ZombieHorde() {
	delete [] this->_wave;
}

