#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
    {
		try
		{
			Bureaucrat mike("Mike", 15);
			AForm AForm("B58", 20, 45);
			std::cout << mike << std::endl;
			std::cout << AForm << std::endl;
			mike.signAForm(AForm);
			std::cout << AForm << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
    return 0;
}