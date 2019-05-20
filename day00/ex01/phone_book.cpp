#include <iostream>
#include <stdlib.h>
#include "phone_book.class.hpp"

int Phonebook::PhonebookEntry = 0;

std::string info[] = {
	"first name",
	"last name",
	"nickname",
	"login",
	"postal address",
	"email address",
	"phone number",
	"birthday date",
	"favorite meal",
	"underwear color",
	"darkest secret"
};

Phonebook add(void) {
	Phonebook newEntry;
	
	for (int i = 0; i < 11; ++i){
		std::string buff;
		std::cout << info[i] << ":" << std::endl;
		std::getline(std::cin, buff);
		newEntry.info[i] = buff;
	}
	return newEntry;
}

int main(void) {
	Phonebook entry[8];

	for (;;)
	{
		std::string buff;
		std::cout << "Enter command:" << std::endl;
		std::getline(std::cin, buff);

		if (buff == "ADD"){
			if(Phonebook::PhonebookEntry > 7)
				std::cout << "You're Phonebook is full" << std::endl;
			else{
				entry[Phonebook::PhonebookEntry] = add();
				Phonebook::PhonebookEntry += 1;
			}
		} else if( buff == "SEARCH"){
			if (Phonebook::PhonebookEntry == 0) {
				std::cout << "No entry yet" << std::endl;
				continue;
			}
			std::cout << "|     index|first name| last name|  nickname|" << std::endl;
			for (int i = 0; i < Phonebook::PhonebookEntry; ++i)
			{
				entry[i].search(i);
			}
			for (;;)
			{
				std::cout << "Please enter index number:" << std::endl;
				std::getline(std::cin, buff);
				if(buff.length() == 1 && isdigit(buff[0])){
					int index = buff[0] - '0';
					if (index < Phonebook::PhonebookEntry){
						entry[index].printPhonebookIndex();
						break;
					}
					else
						std::cout << "This entry is not valid" << std::endl;
				}
				else if(buff == "EXIT")
					return 0;
				else 
					std::cout << "This entry is not valid" << std::endl;
			}
			
		} else if (buff == "EXIT") {
			return 0;
		} else
			std::cout << "Please enter: ADD, SEARCH or EXIT" << std::endl;
	}
	
	return 0;
}
