
//
// Created by Aurore LIANDIER on 2019-05-27.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat {
private:
    Bureaucrat();
    std::string const   _name;
    unsigned int        _grade;

protected:
public:
    Bureaucrat(std::string, unsigned int) throw(GradeTooHighException, GradeTooLowException);
    Bureaucrat(Bureaucrat const &);
    virtual     ~Bureaucrat();
    Bureaucrat &operator=(Bureaucrat const &);


    /*       GETTER         */
    std::string const   getName() const;
    unsigned int                 getGrade() const;

     /*      FUNC            */
     void       incGrade();
     void       decGrade();
     void       signForm(Form&);

     /*     CLASS            */
    class GradeTooLowException : public  std::exception {
    public:
        char const *what() const throw();

         };
    class GradeTooHighException : public  std::exception {
    public:
        char const *what() const throw();

    };

};

std::ostream &operator<<(std::ostream &, Bureaucrat const &);

#endif /* BUREAUCRAT_HPP */
