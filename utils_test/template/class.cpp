#include <iostream>

template < typename T >

class List{

public:
    List<T>(T const content){
        //etc
    }
    List<T>(List<T> const &list){
        // etc
    }
    ~List<T>( void ){
        //etc
    }
private:
    T * _content;
    List<T> *_next;
};

int main(void){
    List< int > a(42);
    List< float > b(3.14f);
    List< List<int> >c(a);
    return 0;
}