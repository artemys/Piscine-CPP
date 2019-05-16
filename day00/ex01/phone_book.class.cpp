#include <iostream>
#include <iomanip>
#include "phone_book.class.hpp"

Phonebook::Phonebook (void) {}

Phonebook::~Phonebook (void) {}

void Phonebook::search(int i) const {

	std::cout << "|" << std::setw(10) << i;
	for (int i = 0; i <= 2; ++i)
	{
		std::cout << "|";

		if (this->info[i].length() > 10)
			std::cout << this->info[i].substr(0,9)<< ".";
		else
			std::cout <<  std::setw(10) << this->info[i];
	}
	std::cout << "|" << std::endl;

	return;
}

void	Phonebook::printPhonebookIndex() const{
	std::cout << "first name: " << this->info[0] << std::endl;
	std::cout << "last name: " << this->info[1] << std::endl;
	std::cout << "nickname: " << this->info[2] << std::endl;
	std::cout << "login: " << this->info[3] << std::endl;
	std::cout << "postal address: " << this->info[4] << std::endl;
	std::cout << "email address: " << this->info[5] << std::endl;
	std::cout << "phone number: " << this->info[6] << std::endl;
	std::cout << "birthday date: " << this->info[7] << std::endl;
	std::cout << "favorite meal: " << this->info[8] << std::endl;
	std::cout << "underwear color: " << this->info[9] << std::endl;
	std::cout << "darkest secret:  " << this->info[10] << std::endl;
}
