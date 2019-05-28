#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
    /*      COPLIEN         */
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const &);
    RobotomyRequestForm  &operator=(RobotomyRequestForm const &);

    RobotomyRequestForm(std::string const);

    /*       FUNC            */
    void    execute(Bureaucrat const &) const;

private:
    RobotomyRequestForm();

};

#endif /* ROBOTOMYREQUESTFORM_HPP */
