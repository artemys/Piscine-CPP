
#include <iostream>

template < typename T >
class Array {

public:
    /*           COPLIEN                          */
    virtual ~Array() {
        std::cout << "destructor called" << std::endl;
        delete _array;
        std::cout << "Array deleted" << std::endl;

    }
    Array(Array const & src) { *this = src; }
    Array &operator=(Array const &) { return *this; }

    /*        SPEC CONSTRUCT & FUNC               */
    Array(unsigned int n = 0) : _sz(n){
        std::cout << "constructor called" << std::endl;
        _array = new T[n];
        std::cout << "Array created with a size of " << _sz << std::endl;

    }
    T operator[](T i){
        if (_sz <= i)
            throw std::out_of_range("this element is out of range");
        return _array[i];
    }
    unsigned int getSize(void){
        return _sz;
    }

private:
    unsigned int    _sz;
    T               *_array;

};


int main(){
    unsigned int sz = 5;
    Array <unsigned int>test1(sz);

    sz = 9;
    Array <unsigned int>test2(sz);
    std::cout << std::endl;
    try {
        std::cout << "array2 size is: " << test2.getSize() << std::endl;
        std::cout << "trying to access to array2[4] : " << test2[4] << std::endl;
        std::cout << "trying to access to array2[6] : " << test2[6] << std::endl;

        std::cout << "array1 size is: " << test1.getSize() << std::endl;
        std::cout << "trying to access to array1[4] : " << test1[4] << std::endl;
        std::cout << "trying to access to array1[6] : " << test1[6] << std::endl;
    }catch (std::out_of_range &e){
        std::cout << "can't access to this elem because " << e.what() << std::endl;
    }


    return 0;
}
