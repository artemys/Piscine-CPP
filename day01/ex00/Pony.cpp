#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string ponyColor, std::string ponyName, int ponyPlay) 
	: _ponyColor(ponyColor), _ponyName(ponyName), _ponyPlay(ponyPlay){
	std::cout << "A new pony is born ! His name is "<< this->_ponyName << std::endl;
}

Pony::~Pony(void){
	std::cout << "A new pony is died ! His name was " << this->_ponyName << std::endl;
}
