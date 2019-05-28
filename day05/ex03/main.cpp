#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include "Intern.hpp"

int
main () {

    Bureaucrat batman("Batman", 1);
    Bureaucrat alfred("Alfred", 150);
    Intern slave;
    Form *ppf = slave.makeForm("presidential pardon", "Harvey");
    Form *rrf = slave.makeForm("robotomy request", "Joker");
    Form *scf = slave.makeForm("shrubbery creation", "Batcave");
    std::cout << std::endl;

    Form *badform = slave.makeForm("bad form request", "Harvey");
    std::cout << std::endl;

    batman.executeForm(*ppf);
    batman.executeForm(*rrf);
    batman.executeForm(*scf);
    std::cout << std::endl;


    batman.signForm(*ppf);
    batman.signForm(*rrf);
    batman.signForm(*scf);
    std::cout << std::endl;


    batman.executeForm(*ppf);
    batman.executeForm(*rrf);
    batman.executeForm(*scf);
    std::cout << std::endl;


    alfred.executeForm(*ppf);
    alfred.executeForm(*rrf);
    alfred.executeForm(*scf);

    delete ppf;
    delete rrf;
    delete scf;
    delete badform;
    return 0;
}
