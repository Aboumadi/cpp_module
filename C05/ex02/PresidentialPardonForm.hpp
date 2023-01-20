#pragma once
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    
public:
    //constructor and destructor
    PresidentialPardonForm();
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(PresidentialPardonForm const &copy);
    ~PresidentialPardonForm();

    //operators
    PresidentialPardonForm const &operator=(PresidentialPardonForm const &other);

    //Member fonctions
    void    execute(Bureaucrat const & executor);
};

std::ostream &operator<<(std::ostream &output, PresidentialPardonForm const &P);
