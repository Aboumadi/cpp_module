#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    //std::cout << "RobotomyRequestForm default constructor " << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    //std::cout << "RobotomyRequestForm destructor " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): AForm(target, 72, 45)
{
    //std::cout << "RobotomyRequestForm constructor parametrize " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy): AForm(copy)
{
    //std::cout << "RobotomyRequestForm copy constructor " << std::endl;
}

RobotomyRequestForm const &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
    (void) other;
    //std::cout << "RobotomyRequestForm assignement operator" << std::endl;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (GetisSigned() && executor.getGrade() <= GetExecGrad())
    {
        srand(time(0));
        int randum = rand() % 2;
        if (randum)
            std::cout << this->Getname() << " has been robotomized successfully 50% of the time." << std::endl;
        else
            std::cout << "robotomy was failed" << std::endl;
    }
    else
        throw GradeTooLowException();
}