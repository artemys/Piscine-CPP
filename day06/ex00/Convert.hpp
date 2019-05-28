#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
class Convert {
public:
    /*      COPLIEN         */
    Convert();
    virtual ~Convert();
    Convert(Convert const &);
    Convert  &operator=(Convert const &);

    Convert(char const *);

private:
    char const * _input;
};

#endif /* CONVERT_HPP */
