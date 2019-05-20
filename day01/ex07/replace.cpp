#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include "stdlib.h"

void    replace(char const *av[]){

    std::ifstream   inputFile(av[1]);
    std::ofstream   outputFile;

    std::string     newFile(av[1]);
    std::ostringstream streamBuff;

    outputFile.open(newFile.append(".replace"), std::fstream::out);

    streamBuff << inputFile.rdbuf();
    std::string line = streamBuff.str();

    while (line.find(std::string(av[2])) != std::string::npos)
    {
        line.replace(line.find(std::string(av[2])), std::string(av[2]).length(), std::string(av[3]));
    }
    outputFile << line;

    inputFile.close();
    outputFile.close();
}

bool  checkError(char const *av[]) {
    std::ifstream fichier(std::string(av[1]).c_str());

    if(fichier.fail()){
        std::cerr << "File does not exist or can not be read." << std::endl;
        return false;
    }
    else if (std::string(av[2]).length() <= 0  || std::string(av[3]).length() <= 0){
        std::cerr << "Target string and source string can not be empty." << std::endl;
        return false;
    }
    return true;
}

int main(int ac, char const *av[])
{

	if (ac != 4){
		std::cerr << "usage: [FILE] [STR_TARGET] [STR_SOURCE]" << std::endl;
		return 0;
	}
	else if (checkError(av))
	    replace(av);
	return 0;
}

