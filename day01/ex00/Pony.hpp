#ifndef PONY_CLASS_H
 #define PONY_CLASS_H
 #include <string>

class Pony{

public:
	Pony(std::string _ponyColor, std::string _ponyName, int _ponyPlay);
	~Pony(void);
private:
	std::string _ponyColor;
	std::string _ponyName;
	int			_ponyPlay;

};

#endif