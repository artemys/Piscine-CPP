#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain(){
    setBrainAddress();
}
Brain::~Brain(){}

void    Brain::setBrainAddress(void)
{
    std::stringstream   buff;

    buff << this;
    this->_brainAddress = buff.str();
}

std::string Brain::getBrainAddress(){

    return this->_brainAddress;
}
std::string Brain::identify() {
    return this->getBrainAddress();
}
 