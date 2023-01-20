#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm shrubbery("Home");
	RobotomyRequestForm robotomy("Morty");
	//PresidentialPardonForm pardon("Rick Sanchez");
	Bureaucrat mike("Mike", 150);
	Bureaucrat jon("Jon", 120);
	Bureaucrat steve("Steve", 3);
    {
		try
		{
			std::cout << mike << std::endl;
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			//std::cout << pardon << std::endl;
			mike.executeForm(shrubbery);
			mike.executeForm(robotomy);
			//mike.executeForm(pardon);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
    return 0;
}