#include <iostream>
class Base{
public:
    virtual ~Base(){};
};
class A : public Base{};
class B : public Base{};
class C : public Base{};

Base * generate(void){
    srand(time(0));
    Base *random;

    int r = rand() % 3;
    if (r == 0)
        random = new A;
    else if(r == 1)
        random = new B;
    else
        random = new C;
    return random;
}
void identify_from_pointer( Base * p ){
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}
void identify_from_reference( Base & p ){

    if (dynamic_cast<A*>(&p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(&p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(&p))
        std::cout << "C" << std::endl;
}
int main(){
    Base *test = generate();
    identify_from_pointer(test);
    identify_from_reference(*test);
    return 0;
}
