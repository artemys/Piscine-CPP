#include <iostream>
#include "Sample.class.hpp"

void	f0(void){
	Sample instance;
	
	std::cout << "Number of instances : " << Sample::GetNonMemberAtrribute() << std::endl;

	return;
}


void	f1(void){
	Sample instance;

	std::cout << "Number of instances : " << Sample::GetNonMemberAtrribute() << std::endl;
	f0();
	return;
}


int	main(){

/*	Sample instance;
	instance.member_attribute = 42;

	std::cout << "instance.member_attribute:" << instance.member_attribute << std::endl;
	instance.member_function();
*/
	/* testing ascessor */
//	instance.setprivate_attribute(62);
//	std::cout << "instance.getprivate_attributes() : " << instance.getprivate_attribute() << std::endl;
	
	/*CA Ne marche pas :
	instance._private_attributes = 0; */
/*
	Sample1 instance1('a', 41, 4.24f);
	Sample2 instance2('b', 42, 2.43f);*/
/*
	Sample_const instance1(3.14f);
	instance1.const_function();*/

/*		testing compare		*/
	/*Sample 	toCompare1(42);
	Sample 	toCompare2(42);

	if (&toCompare1 == &toCompare1)
		std::cout << "toCompare1 and toCompare1 are physically equal" << std::endl;
	else
		std::cout << "toCompare1 and toCompare1 are not physically equal" << std::endl;

	if (&toCompare1 == &toCompare2)
		std::cout << "toCompare1 and toCompare2 are physically equal" << std::endl;
	else
		std::cout << "toCompare1 and toCompare2 are not physically equal" << std::endl;

	if (toCompare1.compare( &toCompare1) == 0)
		std::cout << "toCompare1 and toCompare1 are structurally equal" << std::endl;
	else
		std::cout << "toCompare1 and toCompare1 are not structurally equal" << std::endl;

	if (toCompare1.compare( &toCompare2) == 0)
		std::cout << "toCompare1 and toCompare2 are structurally equal" << std::endl;
	else
		std::cout << "toCompare1 and toCompare2 are not structurally equal" << std::endl;
*/

 /*testing non_membre funct and attr */
	std::cout << "Number of instance: " << Sample::GetNonMemberAtrribute() << std::endl;
	f1();
	std::cout << "Number of instance: " << Sample::GetNonMemberAtrribute() << std::endl;

	return 0;
}