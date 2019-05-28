#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &rhs) { *this = rhs; }

Intern::~Intern() {}

Intern &
Intern::operator=(Intern const &) {

    return *this;
}

Form *Intern::makeForm(std::string formName, std::string target){
    Form *newForm = NULL;
    if(formName == "shrubbery creation")
        newForm = new ShrubberyCreationForm(target);
    if(formName == "robotomy request")
        newForm = new RobotomyRequestForm(target);
    if(formName == "presidential pardon")
        newForm = new PresidentialPardonForm(target);

    if (newForm) {
        std::cout << "Intern creates " << newForm->getName() << "." << std::endl;
    } else {
        std::cout << formName << " 's name isn't know, creation doesn't work." << std::endl;
    }
    return newForm;
}
