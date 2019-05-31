#include "easyfind.hpp"
#include <iostream>
#include <list>
int main(){

    std::list<int>	lst;

    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(4);
    lst.push_back(3);
    lst.push_back(5);

    try{

        std::cout <<"trying to find 5 in the lst : '1,2,4,3,5'...  return index : " << easyfind(lst, 5) << std::endl;
        std::cout <<"trying to find 10 in the lst : '1,2,4,3,5'...  return index : " << easyfind(lst, 10) << std::endl;

    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }


    return 0;
}
