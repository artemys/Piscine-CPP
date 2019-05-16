#ifndef PHONE_BOOK_CLASS_H
 #define PHONE_BOOK_CLASS_H
 #include <string>

class Phonebook {

public:
	Phonebook(void);
	~Phonebook(void);

	std::string	info[11];

	static int PhonebookEntry;
	void	search(int) const;
	void	printPhonebookIndex(void) const;

};

#endif