#include <iostream>

int		main(int ac, char **av){

	if (ac != 1){
		for (int i = 1; i < ac; ++i) {
			std::string av_string(av[i]);
				for (size_t j = 0; j < av_string.length(); ++j) {
					av_string[j] = toupper(av_string[j]);	
				}
				std::cout << av_string;
			}
		}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		
	std::cout << std::endl;
	return 0;
}
