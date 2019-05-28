#include "Convert.hpp"
#include <typeinfo>


Convert::Convert() {}

Convert::Convert(Convert const &rhs)  { *this = rhs; }

Convert::~Convert() {}

Convert &
Convert::operator=(Convert const &) { return *this; }

Convert::Convert(char const *input) : _input(input) {
    std::cout << typeid(_input).name() << std::endl;

}

