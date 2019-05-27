#ifndef FORM_HPP
#define FORM_HPP
#include "form.h"
#include "Bureaucrat.hpp"
#include <iostream>
class Form {
public:

    /*          COPLIEN                 */
    Form(Form const & src);
    virtual ~Form();
    Form &operator=(Form const & rhs);
    Form(std::string, std::string, unsigned int, unsigned int) throw(GradeTooHighException, GradeTooLowException);

    /*          FUNC                    */
    void            beSigned(Bureaucrat&);
    void            checkRight();

    /*          GETTERS                 */
    bool            getIsSign() const;
    unsigned int    getSignGrade() const;
    unsigned int    getExecSign() const;
    std::string     getName() const;

    /*           CLASS                  */
    class GradeTooLowException : public  std::exception {
    public:
        char const *what() const throw();

    };
    class GradeTooHighException : public  std::exception {
    public:
        char const *what() const throw();

    };

protected:
    Form();

private:
    std::string            const  _name;
    bool                          _isSign;
    unsigned int           const  _signGrade;
    unsigned int           const  _execGrade;
    std::string            const  _target;


};
std::ostream &operator<<(std::ostream &, Form const &f);
#endif
