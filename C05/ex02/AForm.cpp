#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): name("Default"), isSigned(0), SignGrad(0), ExecGrad(0)
{
}

AForm::~AForm()
{
}

AForm::AForm(std::string const _name, int const _SignGrad, int const _ExecGrad): name(_name), SignGrad(_SignGrad), ExecGrad(_ExecGrad)
{
    if (SignGrad < 1)
        throw(AForm::GradeTooHighException());
    else if (SignGrad > 150)
        throw(AForm::GradeTooLowException());
    if (ExecGrad < 1)
        throw(AForm::GradeTooHighException());
    else if (ExecGrad > 150)
        throw(AForm::GradeTooLowException());
}

AForm::AForm(AForm const &copy): name(copy.name), isSigned(copy.isSigned), SignGrad(copy.SignGrad), ExecGrad(copy.ExecGrad)
{
    *this = copy;
}

AForm const &AForm::operator=(AForm const &other)
{
    this->isSigned = other.isSigned;
    return *this;
}

std::string const AForm::Getname()
{
    return (this->name);
}

bool    AForm::GetisSigned()
{
    return (this->isSigned);
}

int AForm::GetSignGrad()
{
    return (this->SignGrad);
}

int AForm::GetExecGrad()
{
    return (this->ExecGrad);
}

void    AForm::beSigned(Bureaucrat &bcart)
{
    if (bcart.getGrade() > this->SignGrad)
        throw(AForm::GradeTooLowException());
    else
    {
        this->isSigned = 1;
        std::cout << bcart.getName() << " is Signed succesfully " << this->name << std::endl;
    }
}

char const *AForm::GradeTooHighException::what() const throw()
{
    return ("Grad is too high");
}

char const *AForm::GradeTooLowException::what() const throw()
{
    return ("Grad is too low");
}

std::ostream	&operator<<(std::ostream &output, AForm &AForm)
{
    return (output << AForm.Getname() << " signed AForm : " << AForm.GetisSigned() << ", sign grade: " << AForm.GetSignGrad() << ", execute grade : " << AForm.GetExecGrad());
}