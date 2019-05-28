#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
public:
    /*      COPLIEN         */
    Intern();
    virtual ~Intern();
    Intern(Intern const &);
    Intern &operator=(Intern const &);
    Form *makeForm(std::string, std::string);
};

#endif /* INTERN_HPP */
