#ifndef ZOMBIE_HPP
 #define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce() const;

		void	setZombieType(std::string);
		void	setZombieName(std::string);

	private:
		std::string	_name;
		std::string _type;
};
#endif
