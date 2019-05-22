#include "canonicalForm.class.hpp"
Canonical::Canonical(void) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Canonical::Canonical(Canonical const &src) {
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
    return ;
}

Canonical::~Canonical(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}

Canonical &Canonical::operator=(Canonical const &rhs) {
    std::cout <<
}

int Canonical::getFoo(void) const {
    return 0;
}

std::cout << "Parametric Constructor called" << std::endl;
return;