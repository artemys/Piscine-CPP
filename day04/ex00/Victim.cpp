#include "Victim.hpp"
Victim::Victim() {

}

Victim::Victim(std::string name) : _name(name) {
    std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::Victim(const Victim &src) {
    *this = src;
}

Victim::~Victim() {
    std::cout << "Victim "
    << this->_name << " just died for no apparent reason !" << std::endl;
}

Victim &Victim::operator=(const Victim &rhs) {
    this->_name = rhs._name;
    return *this;
}

std::string Victim::getName() const{
    return this->_name;
}

void Victim::getPolymorphed() const {
    std::cout << this->_name
    << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs){
    o << "I am " << rhs.getName()  << " and i like otters !" << std::endl;
    return o;
}
