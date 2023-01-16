#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
    std::string const name;
    bool              isSigned;
    int const         SignGrad;
    int const         ExecGrad;
public:
    //Constructors and destructor
    Form();
    Form(std::string const _name, int const _SignGrad, int const _ExecGrad);
    Form(Form const &copy);
    ~Form();

    //Operetors
    Form const &operator=(Form const &other);

    //Getters and Setters
    std::string const   Getname();
    bool                GetisSigned();
    int           GetSignGrad();
    int           GetExecGrad();

    //Member fonction
    void    beSigned(Bureaucrat &bcrat);

    //Class exception
    class GradeTooHighException: std::exception
    {
        public:
        char const *what() const throw();
    };

    class GradeTooLowException: std::exception
    {
        public:
        char const *what() const throw();
    };
};

std::ostream	&operator<<(std::ostream &output, Form &form);
