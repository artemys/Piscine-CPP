#ifndef ZOMBIEEVENT_HPP
 #define ZOMBIEEVENT_HPP
 #include "Zombie.hpp"
 #include <string>

class ZombieEvent
{
	public:
		ZombieEvent();
		~ZombieEvent();

		std::string getZombieType() const;
		void 		setZombieType(std::string const);
		Zombie 		*newZombie(std::string, std::string const);
		Zombie		*ramdomChump();
	private:
		std::string _type;
};

#endif
