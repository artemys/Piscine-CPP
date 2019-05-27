//
// Created by Aurore LIANDIER on 2019-05-27.
//

#include "Bureaucrat.hpp"

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

void Bureaucrat::incGrade() throw(GradeTooHighException) {
    if(_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void Bureaucrat::decGrade() throw(GradeTooLowException) {
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

Bureaucrat::~Bureaucrat() {

}

std::ostream &
operator<<(std::ostream &os, Bureaucrat const &el) {
    os << el.getName() << ", bureaucrat grade " << el.getGrade() << std::endl;
    return os;
}


char const *Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade too low";
}
char const *Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade too high";
}
