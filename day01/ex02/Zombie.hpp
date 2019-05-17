#ifndef ZOMBIE_HPP
 #define ZOMBIE_HPP
 #include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	annonce() const;
	private:
		std::string	_name;
		std::string _type;
		;


		
	
};
#endif