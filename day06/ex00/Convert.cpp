#include "Convert.hpp"
#include <cmath>

Convert::Convert(Convert const &rhs)  { *this = rhs; }
Convert::~Convert() {}
Convert &
Convert::operator=(Convert const &) { return *this; }


Convert::Convert(char const *input) : _input(input) {

    std::string str(_input);
    _error = 0;
    _strInput = str;

    if(!isChar())
    {
        try {
            _dblConv  = std::stod(_input);
            _fltConv  = static_cast<float>(_dblConv);
            if(_dblConv != _dblConv)
                _error |= NAN_ERROR;
            _intConv  = static_cast<int>(_dblConv);
            if(_intConv >=  std::numeric_limits<int>::max() || _intConv <=  std::numeric_limits<int>::min())
                _error |= INT_ERROR;

            if(isprint(_intConv) == 0)
                _error |= PRINT_ERROR;

            _charConv = static_cast<char>(_dblConv);
            if(round(_dblConv) != _dblConv || _charConv >=  std::numeric_limits<char>::max() || _charConv <=  std::numeric_limits<char>::min())
                _error |= CHAR_ERROR;
        }
        catch (const std::invalid_argument &e) {
            _error = CHAR_MAX & (~PRINT_ERROR);
        }
        catch (const std::out_of_range &e) {
            _error = CHAR_MAX & (~PRINT_ERROR);
        }
    }
}

void Convert::display() const {

    std::cout << std::setprecision(1) << std::fixed << "char: ";
    if (_error & CHAR_ERROR) {
        std::cout << "impossible" << std::endl;
    } else if (_error & PRINT_ERROR) {
        std::cout << "Non displayable" << std::endl;
    } else {
        std::cout << "'" << _charConv << "'" << std::endl;
    }

    std::cout << "int: ";
       if (_error & INT_ERROR) {
        std::cout << "impossible" << std::endl;
    } else {
        std::cout << _intConv << std::endl;
    }

    std::cout << "float: ";
    if (_error & FLT_ERROR) {
        std::cout << "impossible" << std::endl;
    } else {
        std::cout << _fltConv << "f" << std::endl;
    }

    std::cout << "double: ";
    if (_error & DBL_ERROR) {
        std::cout << "impossible" << std::endl;
    } else {
        std::cout << _dblConv << std::endl;
    }
}

bool Convert::isChar() {
    if(!isdigit(_input[0]) && strlen(_input) == 1) {
        _intConv = static_cast<int>(_strInput[0]);
        _charConv = _strInput[0];
        _fltConv  = _intConv;
        _dblConv = _intConv;

        return true;
    }

    return false;
}
