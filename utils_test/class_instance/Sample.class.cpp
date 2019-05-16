
#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(int i){
	//	std::cout << " Sample construct" << std::endl;
	this->member_attribute = 42;
	// std::cout << " Sample this->member_attribute: " << this->member_attribute << std::endl;
	this->member_function();

	/* private section */
	this->_private_attribute = 0;
	// std::cout << "Sample this->_private_attribute: " << this->_private_attribute << std::endl;
	this->_private_function();

	/* testing non membre funct and attr */
	Sample::_nonMemberAttribute += 1;
	return;
}

/*		destructor			*/
Sample::~Sample(void){
	std::cout << " Sample destruct" << std::endl;
	Sample::_nonMemberAttribute -= 1;
	return;
}
/*		non_member_function called 
		on ne peut jamais faire appel au pointer 
		this dans une func non membre 			*/
int 	Sample::GetNonMemberAtrribute(void){
	return Sample::_nonMemberAttribute;

}
/* 	non memeber attribute set 	
	pour faire appel a un attribut ou une func non membre
	on utilise : "le nom de la class+le nom de 
	l'attr ou de la func non membre"

	SEUL FACON D'INIT un attr non memebre
*/
int 	Sample::_nonMemberAttribute = 0;


/*		member_function called	*/
void	Sample::member_function(void){
	// std::cout << "member_function" << std::endl;
	return;
}
/*ascessor */
int 	Sample::getprivate_attribute(void) const{
	return this->_private_attribute;
}
void Sample::setprivate_attribute(int v){
	if (v >= 0 )
		this->_private_attribute = v;
	return;
}
/*compare */
int Sample::compare(Sample *other) const {
	if (this->_private_attribute < other->getprivate_attribute())
		return -1;
	else if (this->_private_attribute > other->getprivate_attribute())
		return 1;
	return 0;
}
/* NE PAS FAIRE CA : */
/*Sample1::Sample1(char p1, int p2, float p3){
	//std::cout << "construct called" << std::endl;
	this->a1 = p1;
	std::cout << "sample1 : this->a1: " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "sample1 : this->a2: " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "sample1 : this->a3: " << this->a3 << std::endl;
}
Sample1::~Sample1(void){
	std::cout << "sample1 destruct" << std::endl;
	return;
}
*/
/* FAIRE CA : */
Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3){
	std::cout << "Sample2 : this->a1 : " << this->a1 << std::endl;
	std::cout << "Sample2 : this->a2 : " << this->a2 << std::endl;
	std::cout << "Sample2 : this->a3 : " << this->a3 << std::endl;
}
Sample2::~Sample2(void){
	std::cout << "sample2 destruct" << std::endl;
	return;
}
/* exemple utilisation de const */
Sample_const::Sample_const(float const f):pi(f), i(42){
	std::cout << "Sample_const : construct" << std::endl;
	return;
}
Sample_const::~Sample_const(void){
	std::cout << " Sample_const : destruct" << std::endl;
}
void Sample_const::const_function(void) const{
	std::cout << "this->pi : " << this->pi << std::endl;
	std::cout << "this->i : " << this->i << std::endl;
	/* le fait de definir cette fonction en const 
	intedit de modifier des variable de l'instance courante
	comme ceci : 
	this->i = 0; */
	return;
}
void Sample::_private_function(void) const {
	std::cout << "Member _private_function called" << std::endl;
	return;
}