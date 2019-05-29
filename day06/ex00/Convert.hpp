#ifndef CONVERT_HPP
 # define CONVERT_HPP
 # include <iostream>
 # include <iomanip>
 # include <limits>

# define CHAR_ERROR 1
# define INT_ERROR 2
# define FLT_ERROR 4
# define DBL_ERROR 8
# define NAN_ERROR 16
# define PRINT_ERROR 32

class Convert {
public:
    /*      COPLIEN         */
    Convert();
    virtual ~Convert();
    Convert(Convert const &);
    Convert  &operator=(Convert const &);

    Convert(char const *);

    /*      FUNC            */
    void    display() const;
    bool    isChar();

private:
    char const   * _input;
    char           _charConv;
    int            _intConv;
    double         _dblConv;
    float          _fltConv;
    std::string    _strInput;
    int8_t          _error;
};

#endif /* CONVERT_HPP */
