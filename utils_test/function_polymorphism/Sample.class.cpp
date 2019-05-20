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
    std::cout << "fucntion bar call" << std::endl;
    return;
}

void Sample::bar(char const c) const {

}

void Sample::bar(Sample const &i) const {

}

void Sample::bar(int const n) const {

}