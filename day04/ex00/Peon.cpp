#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &src) : Victim(){
    *this = src;
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(const Peon &rhs) {
    Victim::operator=(rhs);
    return *this;
}

void Peon::getPolymorphed() const {
    std::cout << Victim::getName()  << " has been turned into a pinky pony !" << std::endl;
}
