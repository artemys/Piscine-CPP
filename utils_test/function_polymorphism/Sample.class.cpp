#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(void){
    std::cout << "constructor called" << std::endl;
    return;
}

Sample::~Sample(void){
    std::cout << "destructor called" << std::endl;
    return;
}

void Sample::bar(float const z) const {
    std::cout << "fucntion bar call with float" << std::endl;
    return;
}

void Sample::bar(char const c) const {
    std::cout << "fucntion bar call with char" << std::endl;
    return;
}

void Sample::bar(Sample const &i) const {
    std::cout << "fucntion bar call with class" << std::endl;
return;
}

void Sample::bar(int const n) const {
    std::cout << "fucntion bar call with int" << std::endl;
return;
}