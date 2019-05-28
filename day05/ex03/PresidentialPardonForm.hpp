#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
public:
                            PresidentialPardonForm(std::string);
    virtual                 ~PresidentialPardonForm();
                            PresidentialPardonForm(PresidentialPardonForm const &);
    PresidentialPardonForm  &operator=(PresidentialPardonForm const &);
    void                    execute(Bureaucrat const &) const;
};

#endif /* PRESIDENTIALPARDONFORM_HPP */
