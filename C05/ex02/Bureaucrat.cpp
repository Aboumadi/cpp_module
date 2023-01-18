#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string const &_name, int _grade): name(_name)
{
    this->grade = _grade;
    if (grade <= 0)
    {
        throw(Bureaucrat::GradeTooHighException());
    }
    if (grade > 150)
    {
        throw(Bureaucrat::GradeTooLowException());
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
    *this = copy;
}

Bureaucrat const &Bureaucrat::operator=(Bureaucrat const &other)
{
    this->grade = other.grade;
    return (*this);
}

std::string const	&Bureaucrat::getName() const
{
	return (this->name);
}

int const	&Bureaucrat::getGrade() const
{
	return (this->grade);
}

void    Bureaucrat::incremante()
{
    this->grade--;
    if (grade <= 0)
        throw(Bureaucrat::GradeTooHighException());
}

void    Bureaucrat::decremante()
{
    this->grade++;
    if (grade > 150)
        throw(Bureaucrat::GradeTooLowException());
}

char    const *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("too high grade");
}

char    const *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("too low grade");
}

void Bureaucrat::signAForm(AForm const &AForm)
{
    if (AForm.GetSignGrad() >= grade)
        std::cout << name << " is signed " << AForm.Getname() << std::endl;
    else if (AForm.GetisSigned())
        std::cout << name << " can't sign it " << AForm.Getname() << " beacuase it's already signed "<< std::endl;
    else
        std::cout << name << " can't sign it " << AForm.Getname() << " because it is not eligible "<< std::endl;
}

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bcrat)
{
    return (output << bcrat.getName() << ", bureaucrat grade " << bcrat.getGrade());
}