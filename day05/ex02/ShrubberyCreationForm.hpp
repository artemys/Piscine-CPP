#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
class ShrubberyCreationForm : public Form{
public:
    /*      COPLIEN         */
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &);
    ShrubberyCreationForm const &operator=(ShrubberyCreationForm const &);
    ShrubberyCreationForm(std::string);
private:
    std::string         _target;
    void                execute(Bureaucrat const & executor) const;
};

#endif /* SHRUBBERYCREATIONFORM_HPP */
