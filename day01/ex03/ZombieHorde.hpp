#ifndef ZOMBIEHORDE_HPP
 #define ZOMBIEHORDE_HPP
 #include "Zombie.hpp"
class ZombieHorde
{
public:
	ZombieHorde(int n);
	~ZombieHorde();

private:
	int		_n;
	Zombie	*_wave;
};
#endif
