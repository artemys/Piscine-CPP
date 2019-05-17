#include <iostream>
#include <fstream>

int main(){

	std::ifstream ifs("numbers"); //ifs = input file stream
	unsigned int 	dst;
	unsigned int 	dst2;

	ifs >> dst >> dst2;
	std::cout << dst << " " <<dst2 << std::endl;
	ifs.close();

	//--------------------------------------------

	std::ofstream	ofs("test.out"); // outpout file stream
	ofs << "i like ponies" << std::endl;
	ofs.close();
}

/* faire des teste avec les stream de stings:
 istring stream et ostring stream
 un peut l'equivalent de sscanf et sprintf
 ca peut servir a envoyer des messages sur le reseau ou
 sur une sorti de log*/