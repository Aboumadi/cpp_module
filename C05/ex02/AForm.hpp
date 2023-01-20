#pragma once
#include "Bureaucrat.hpp"

class AForm
{
private:
    std::string const   name;
    bool                isSigned;
    int const           SignGrad;
    int const           ExecGrad;
public:
    //Constructors and destructor
    AForm();
    AForm(std::string const _name, int const _SignGrad, int const _ExecGrad);
    AForm(AForm const &copy);
    ~AForm();

    //Operetors
    AForm const &operator=(AForm const &other);

    //Getters and Setters
    std::string const   Getname() const;
    bool                GetisSigned() const;
    int                 GetSignGrad() const;
    int                 GetExecGrad() const;

    //Member fonction
    void                beSigned(Bureaucrat &bcrat);
    virtual void        execute(Bureaucrat const & executor) const = 0;

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

std::ostream	&operator<<(std::ostream &output, AForm &AForm);
