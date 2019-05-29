#include "Convert.hpp"
int main(int ac, char **av){

    if(ac == 2){
        Convert test1(av[1]);
        test1.display();
    }

    return 0;
}
