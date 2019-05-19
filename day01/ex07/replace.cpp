#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

int main(int ac, char const *av[])
{
	if (ac != 3){
		std::cout << "usage: [FILE] [STRDEST] [STRSOURCE]" << std::endl;
		return 0;
	}
	std::ifstream   infile(av[1]);
	std::string     newFile(av[1]);


	std::ofstream   file;

	file.open(newFile.append(".replace"), std::fstream::out);
    file << infile.rdbuf();
	std::string line;
    std::fo (std::getline(newFile, line)){
        std::cout << line;
    }

	while (std::getline(infile, line))
	{
        std::size_t found = line.find(av[2]);
        if (found != std::string::npos)
            std::cout <<  ;
        std::cout << found;
	}

	return 0;
}

