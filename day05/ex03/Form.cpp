//
// Created by Aurore LIANDIER on 2019-05-27.
//

#include "Form.hpp"

Form::Form(Form const &rhs) : _signGrade(0),  _execGrade(0) { *this = rhs; }

Form::~Form() {}

Form &
Form::operator=(Form const &) {
    return *this;
}

Form::Form( std::string name, std::string const target, unsigned int signGrade, unsigned int execGrade)
throw(GradeTooHighException, GradeTooLowException) :  _name(name), _target(target), _signGrade(signGrade), _execGrade(execGrade) {
    _isSign = false;

    if (_signGrade > 150 || _execGrade > 150)
        throw Form::GradeTooLowException();
    if (_signGrade < 1 || _execGrade < 1)
        throw Form::GradeTooHighException();
}

bool Form::getIsSign() const {
    return _isSign;
}

unsigned int Form::getSignGrade() const {
    return _signGrade;
}

unsigned int Form::getExecSign() const {
    return _execGrade;
}


void Form::beSigned(Bureaucrat const &bur) {
    if(_signGrade < bur.getGrade())
        throw Form::GradeTooLowException();
    _isSign = true;
}

std::string const Form::getName() const {
    return _name;
}


void Form::checkRight(Bureaucrat const &bur) const {
    if(_execGrade < bur.getGrade())
        throw Form::GradeTooLowException();

}

void Form::execute(Bureaucrat const &executor) const {

    if (getIsSign() == false)
        throw Form::FormNotSignedException();

    checkRight(executor);
}

std::string const &Form::getTarget() const {
    return _target;
}

Form::Form() : _isSign(false), _signGrade(0), _execGrade(0){
}


std::ostream &
operator<<(std::ostream &os, Form const &) {
    return os;
}
char const *Form::GradeTooLowException::what() const throw(){
    return "Grade too low";
}
char const *Form::GradeTooHighException::what() const throw(){
    return "Grade too high";
}
char const *Form::FormNotSignedException::what() const throw(){
    return "Form is not signed";
}
