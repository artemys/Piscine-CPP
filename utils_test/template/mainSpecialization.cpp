#include <iostream>
#include <iomanip>

template< typename T, typename U >class Pair {
public:
    Pair< T, U >(T const & lhs, U const & rhs ) : _lhs( lhs ), _rhs( rhs){
        std::cout << "Generic template" << std::endl;
        return;
    }
    ~Pair< T, U >(void){}

    T const & getFst(void ) const { return this->_lhs;}
    T const & getSnc(void ) const { return this->_rhs;}

private:
    T const & _lhs;
    T const & _rhs;

    Pair< T, U>(void);
};

template<typename U> 