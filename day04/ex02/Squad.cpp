#include "Squad.hpp"
Squad::Squad() {}

Squad::Squad(const Squad &src) { *this = src; }

Squad::~Squad() {}

Squad &Squad::operator=(const Squad &rhs) {
    this->_count = rhs._count;
    for (int i = 0; i < this->getCount(); ++i) {
        this->_spaceMarine[i] = rhs._spaceMarine[i];
    }
    return *this;
}

int Squad::getCount() const {
    return this->_count;
}

ISpaceMarine *Squad::getUnit(int i) const {
    if ( i < 0 || i >= this->_count )
        return NULL;
    return this->_spaceMarine[i];
}

int Squad::push(ISpaceMarine *) {
    if (this->_count >= 10 || !_spaceMarine)
        return this->_count;
}

