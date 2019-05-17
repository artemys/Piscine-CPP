#ifndef ZOMBIEEVENT_HPP
 #define ZOMBIEEVENT_HPP
 #include "Zombie.hpp"
 #include <string>

class ZombieEvent
{
	public:
		ZombieEvent(std::string);
		~ZombieEvent();

		std::string getZombieType() const;
		void 		setZombieType(std::string const);

		Zombie 		*newZombie(std::string);
		void		randomChump();

	private:
		std::string	_type;
};

#endif
