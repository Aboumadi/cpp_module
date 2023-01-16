#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): name("Default"), isSigned(0), SignGrad(0), ExecGrad(0)
{
}

Form::~Form()
{
}

Form::Form(std::string const _name, int const _SignGrad, int const _ExecGrad): name(_name), SignGrad(_SignGrad), ExecGrad(_ExecGrad)
{
    if (SignGrad < 1)
        throw(Form::GradeTooHighException());
    else if (SignGrad > 150)
        throw(Form::GradeTooLowException());
    if (ExecGrad < 1)
        throw(Form::GradeTooHighException());
    else if (ExecGrad > 150)
        throw(Form::GradeTooLowException());
}

Form::Form(Form const &copy): name(copy.name), isSigned(copy.isSigned), SignGrad(copy.SignGrad), ExecGrad(copy.ExecGrad)
{
    *this = copy;
}

Form const &Form::operator=(Form const &other)
{
    this->isSigned = other.isSigned;
    return *this;
}

std::string const Form::Getname()
{
    return (this->name);
}

bool    Form::GetisSigned()
{
    return (this->isSigned);
}

int Form::GetSignGrad()
{
    return (this->SignGrad);
}

int Form::GetExecGrad()
{
    return (this->ExecGrad);
}

void    Form::beSigned(Bureaucrat &bcart)
{
    if (bcart.getGrade() > this->SignGrad)
        throw(Form::GradeTooLowException());
    else
        this->isSigned = 1;
    std::cout << bcart.getName() << " is Signed succesfully " << this->name << std::endl;
}

char const *Form::GradeTooHighException::what() const throw()
{
    return ("Grad is too high");
}

char const *Form::GradeTooLowException::what() const throw()
{
    return ("Grad is too low");
}

std::ostream	&operator<<(std::ostream &output, Form &form)
{
    return (output << form.Getname() << " form, signed: " << form.GetisSigned() << ", sign grade: " << form.GetSignGrad() << ", execute grade : " << form.GetExecGrad());
}