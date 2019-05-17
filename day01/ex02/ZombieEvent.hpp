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
		void 		setZombieType();
		Zombie 		*newZombie(std::string name);
		void		ramdomChump();
};

#endif
