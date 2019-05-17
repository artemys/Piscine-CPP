#ifndef ZOMBIE_HPP
 #define ZOMBIE_HPP
 #include <string>

class Zombie
{
	public:
		Zombie(std::string);
		~Zombie();
		void	announce() const;

		void	setZombieType(std::string);
		std::string getZombieType() const;
	private:
		std::string	_name;
		std::string _type;
};
#endif