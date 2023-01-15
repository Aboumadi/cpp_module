#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat Default constructor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &_name, int _grade): name(_name)
{
    this->grade = _grade;
    if (grade < 0)
    {
        throw(Bureaucrat::GradeTooHighException());
    }
    if (grade > 0)
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