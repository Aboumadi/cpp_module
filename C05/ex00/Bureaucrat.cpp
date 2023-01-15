#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat Default constructor" << std::endl;
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

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bcrat)
{
    return (output << bcrat.getName() << ", bureaucrat grade " << bcrat.getGrade());
}