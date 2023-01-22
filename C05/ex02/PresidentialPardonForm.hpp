#pragma once
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
    //constructor and destructor
    PresidentialPardonForm();
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(PresidentialPardonForm const &copy);
    ~PresidentialPardonForm();

    //operators
    PresidentialPardonForm const &operator=(PresidentialPardonForm const &other);

    //Member fonctions
    void    execute(Bureaucrat const &executor) const;
};
