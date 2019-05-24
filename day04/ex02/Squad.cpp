#include "Squad.hpp"
Squad::Squad() {
    for (int i = 0; i < this->_count; ++i) {
        this->_spaceMarines[i] = NULL;
    }
}

Squad::Squad(const Squad &src) {

    this->_count = src._count;
    for (int i = 0; i < this->_count; ++i) {
        this->_spaceMarines[i] = src._spaceMarines[i];
    }
}

Squad::~Squad() {
    for (int i = 0; i < this->_count; ++i) {
        delete this->_spaceMarines[i];
        this->_spaceMarines[i] = NULL;
    }
}

Squad &Squad::operator=(const Squad &rhs) {
    this->_count = rhs._count;
    for (int i = 0; i < this->_count; ++i) {
        delete this->_spaceMarines[i];
        this->_spaceMarines[i] = NULL;
    }
    for (int i = 0; i < this->getCount(); ++i) {
        this->_spaceMarines[i] = rhs._spaceMarines[i];
    }
    return *this;
}

int Squad::getCount() const {
    return this->_count;
}

ISpaceMarine *Squad::getUnit(int i) const {
    if ( i < 0 || i >= this->_count )
        return NULL;
    return this->_spaceMarines[i];
}

int Squad::push(ISpaceMarine *newMarine) {
    if (this->_count > 10)
        return this->_count;
    for (int i = 0; i < this->_count; ++i) {
        if (this->_spaceMarines[this->_count] == newMarine)
            return this->_count;
    }
    this->_spaceMarines[this->_count] = newMarine;
    this->_count++;
    return this->_count;
}
