#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) : Form(rhs) { *this = rhs; }

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm  & PresidentialPardonForm::operator=(PresidentialPardonForm const &) { return *this; }

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("PresidentialPardon", target, 137, 145){ }

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {

    Form::execute(executor);
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
