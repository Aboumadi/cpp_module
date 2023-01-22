#pragma once
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
    std::string const name;
    int               grade;
public:
    //Constructor and destructor
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &copy);

    //operators
    Bureaucrat const	&operator=(Bureaucrat const &other);

    //Getter and setter
    std::string const	&getName() const;
	int const			&getGrade() const;

    //Membre fonctions
    void incremante();
    void decremante();
    void signForm(class Form form);

    //Class exceptions
    class GradeTooHighException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
};

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bcrat);
