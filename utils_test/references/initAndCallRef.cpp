#include <iostream>

int main(){
	int numberOfBalls = 42;

	int		*ballsptr = &numberOfBalls;

/*une reference c'est comme un pointeur tjrs dereferencer 
c'est non null 
et constant 
donc c'est cool mais ca ne remplace pas les pointeurs : 
les pointeur peuvent etre init sans variable  */
	int 	&ballsRef = numberOfBalls;

/* 	LES REFS SONT CONSTANTES, 
	ON NE PEUT PAS LES FAIRE POINTER SUR RIEN GENRE
	COMME CA : 

	int		&ballsRefs2;							*/

	std::cout << numberOfBalls << " " 
	<< *ballsptr << " "
	<< ballsRef 
	<< std::endl;

	*ballsptr = 21;
	std::cout << numberOfBalls << std::endl;

	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;
	return 0;
}