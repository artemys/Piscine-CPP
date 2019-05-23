#include "Sorcerer.hpp"
 Sorcerer::Sorcerer(){}
Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
    std::cout << name << ", "
    << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &src) {
    *this = src;
}

Sorcerer::~Sorcerer() {
    std::cout << this->_name << ", "
              << this->_title
              << ", is dead. Consequences will never be the same !" << std::endl;

}

Sorcerer &Sorcerer::operator=(const Sorcerer &rhs) {
    this->_name = rhs._name;
    this->_title = rhs._title;
    return *this;
}

std::string Sorcerer::getName() const {
    return this->_name;
}

std::string Sorcerer::getTitle() const {
    return this->_title;
}

void Sorcerer::polymorph(Victim const &vikos) {
    vikos.getPolymorphed();
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs){
    o << "I am " << rhs.getName() << ", " << rhs.getTitle() << " and i like ponies !" << std::endl;
    return o;
}
