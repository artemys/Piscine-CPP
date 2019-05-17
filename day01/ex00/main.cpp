#include "Pony.hpp"
#include <iostream>
#include <string>

void	ponyOnTheHeap(void){

	Pony 	*heapPony = new Pony("red","Heap", 1);
	std::cout << "The pony is on the heap" << std::endl;
	std::cout << "The pony make pony stuff, then he die now" << std::endl;
	delete heapPony;
	std::cout << "The heap pony is no longer on the heap" << std::endl;
}

void	ponyOnTheStack(void) {
	Pony 	stackPony = Pony("Black", "Stack", 0);
	std::cout << "The pony is on the stack" << std::endl;
}


int	main(void){

	std::cout << "Function ponyOnTheHeap is called" << std::endl;
	ponyOnTheHeap();
	std::cout << "Function ponyOnTheStack is called" << std::endl;
	ponyOnTheStack();

	return 0;
}