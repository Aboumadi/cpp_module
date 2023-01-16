#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    {
		try
		{
			Bureaucrat mike("Mike", 15);
			Form form("B58", 20, 45);
			std::cout << mike << std::endl;
			std::cout << form << std::endl;
			mike.signForm(form);
			std::cout << form << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
    return 0;
}