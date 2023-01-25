#include "Bureaucrat.hpp"

int main()
{
    {
		try
		{
			Bureaucrat mike("Mike", 149);
            mike.decremante();
            mike.decremante();
			std::cout << mike << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

    {	
		try 
		{
			Bureaucrat alan("Alan", 149);
			std::cout << alan << std::endl;
			alan.decremante();
			std::cout << alan << std::endl;
			alan.decremante();
			std::cout << alan << std::endl;
			alan.decremante();
			std::cout << alan << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
    return 0;
}
