//
// Created by Aurore LIANDIER on 2019-05-27.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
Bureaucrat::Bureaucrat(Bureaucrat const &rhs) { *this = rhs; }

Bureaucrat &
Bureaucrat::operator=(Bureaucrat const &rhs) {
    this->_grade = rhs.getGrade();

    return *this;
}

std::string const Bureaucrat::getName() const {
    return this->_name;
}

unsigned int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::incGrade() {
    if(_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void Bureaucrat::decGrade() {
    if(_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) throw(GradeTooLowException, GradeTooHighException): _name(name), _grade(grade)  {
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::signForm(Form &form) {

    try {
        form.beSigned(*this);
        std::cout << _name << " signs " << form.getName() << std::endl;
    }
    catch (Form::GradeTooLowException &e) {
        std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
}
void Bureaucrat::executeForm(Form &form) {
    try {
        form.execute(*this);
        std::cout << _name << " executes " << form.getName() << std::endl;
    }
    catch (Form::GradeTooLowException &e){
        std::cout << _name << " cannot executes " << form.getName() << " because " << e.what() << std::endl;
    }
    catch (Form::FormNotSignedException &e){
        std::cout << _name << " cannot executes " << form.getName() << " because " << e.what() << std::endl;
    }

}


Bureaucrat::~Bureaucrat() {

}


std::ostream &
operator<<(std::ostream &os, Bureaucrat const &el) {
    os << el.getName() << ", bureaucrat grade " << el.getGrade() ;
    return os;
}


char const *Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade too low";
}
char const *Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade too high";
}
