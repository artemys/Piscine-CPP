#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs)
        : ShrubberyCreationForm() { *this = rhs; }

ShrubberyCreationForm::~ShrubberyCreationForm() {}


ShrubberyCreationForm &
ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {

    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyForm", target,  137, 145){ }

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {

}

