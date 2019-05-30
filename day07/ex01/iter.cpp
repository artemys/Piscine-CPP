#include <iostream>

template <typename T>
void iter(T *array, int size, void (*f)(T &)){

    for (int i = 0; i < size; ++i) {
        f(array[i]);
    }
}
template <typename T>
void printElem(T  elem){
    std::cout << elem << std::endl;
}

int main(){
    int array[5] = {1,2,3,4,5};
    iter(array, 5, printElem);
    return 0;
}
