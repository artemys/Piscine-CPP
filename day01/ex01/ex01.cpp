void	memoryLeak(){
	std::string		*panthere = new std::string("string panthere");	
	std::cout << *panthere <<std::endl;
	delete panthere;
}