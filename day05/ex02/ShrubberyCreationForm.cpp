#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs) : Form(rhs) { *this = rhs; }

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm const & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &) { return *this; }

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShrubberyForm", target,  137, 145){ }

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {

    Form::execute(executor);

    std::string name = Form::getTarget();
    name += "_shrubbery";

    std::ofstream ofs(name);
    if (!ofs.is_open()) {
        std::cout << name << ": error opening file." << std::endl;
        return;
    }

    ofs << "       _-_              _-_\n"
           "    /~~   ~~\\        /~~   ~~\\\n"
           " /~~         ~~\\  /~~         ~~\\\n"
           "{               }{               }\n"
           " \\  _-     -_  /  \\  _-     -_  /\n"
           "   ~  \\\\ //  ~      ~  \\\\ //  ~\n"
           "_- -   | | _- _  _- -   | | _- _\n"
           "  _ -  | |   -_    _ -  | |   -_\n"
           "      // \\\\            // \\\\" << std::endl;
    ofs.close();
}
