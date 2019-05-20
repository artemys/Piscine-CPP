#include <iostream>
#include <string>

class Student{
	private : 
		std::string _login;
	public:
		Student(std::string const &login) : _login(login){

		}

		std::string 			&getLoginRef(){
			return this->_login;
		}

		std::string const 		&getLoginRefConst() const {
			return this->_login;
		}
		std::string 			*getLoginPtr(){
			return  &(this->_login);
		}
		std::string const 		*getLoginPtrConst() const {
			return 	&(this->_login);
		}
};

int main(){

	Student			bob = Student("bnya");
	Student const	jim = Student("jnya");

	std::cout << bob.getLoginRefConst() << " "
 	<< jim.getLoginRefConst() << std::endl;
 	std::cout << *(bob.getLoginPtrConst()) << " "
 	<< *(jim.getLoginPtrConst()) << std::endl;

 	bob.getLoginRef() = "bobnya";
 	std::cout << bob.getLoginRefConst() << std::endl;

 	*(bob.getLoginPtr()) = "bobbynya";
 	std::cout << bob.getLoginRefConst() << std::endl;

 	return 0;
}