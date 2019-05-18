#include <iostream>

int main(){
	std::string brain = "HI THIS IS BRAIN";

	std::string *brainPointer = &brain;
	std::string &brainRef = brain;

	std::cout << *brainPointer << std::endl;
	std::cout << brainRef << std::endl;

}