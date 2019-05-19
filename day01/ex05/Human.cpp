#include "Human.hpp"

Human::Human() {}
Human::~Human() {}

Brain Human::getBrain() {
    return this->_brain;
}
std::string Human::identify(){
    return this->_brain.identify();
}