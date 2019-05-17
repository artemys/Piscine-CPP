#ifndef ZOMBIE_HPP
 #define ZOMBIE_HPP
 #include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie();
	private:
		std::string	_name;
		std::string _type;
		std::string _annonce;


		void	annonce(std::string annonce) const;
	
};
#endif