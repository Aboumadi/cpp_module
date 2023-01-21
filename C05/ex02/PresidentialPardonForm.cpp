#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    //std::cout << "PresidentialPardonForm default constructor " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): AForm(target, 25, 5)
{
    //std::cout << "PresidentialPardonForm constructor parametarize " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy): AForm(copy)
{
    //std::cout << "PresidentialPardonForm copy constructor " << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    //std::cout << "PresidentialPardonForm destructor " << std::endl;
}

PresidentialPardonForm const &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
    (void) other;
   // std::cout << "PresidentialPardonForm assignement operator" << std::endl;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (GetisSigned() && executor.getGrade() <= GetExecGrad())
        std::cout << this->Getname() << " has been pardoned by Zafod Beeblebrox." << std::endl;
    else
        throw GradeTooLowException();
}