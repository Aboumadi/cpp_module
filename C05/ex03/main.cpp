#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try 
	{
		Bureaucrat jack("jack",10);
		Intern stg;
		std::cout << jack << std::endl;
		AForm *form;
		form = stg.makeForm("gfhkjgd","house");
		if (!form)
		{
			std::cout<<"no allocation"<<std::endl;
			return 0;
		}
		form->beSigned(jack);
		jack.executeForm(*form);
		delete form;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
    return 0;
}
