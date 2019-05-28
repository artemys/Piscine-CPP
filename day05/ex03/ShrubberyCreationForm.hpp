#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
class ShrubberyCreationForm : public Form{
public:
    /*      COPLIEN         */
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm();
    ShrubberyCreationForm const &operator=(ShrubberyCreationForm const &);
    ShrubberyCreationForm(ShrubberyCreationForm const &);

    ShrubberyCreationForm(std::string);

    /*       GETTERS           */
    std::string  const  getTarget() const;
private:
    void                execute(Bureaucrat const & executor) const;
};

#endif /* SHRUBBERYCREATIONFORM_HPP */
