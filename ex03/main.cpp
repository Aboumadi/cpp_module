#include <string>
#include <iostream>

int main() 
{

    // Declaration of strings
	std::string	str("HI THIS IS BRAIN");
    std::string	*stringPTR;

	//Assignment
	stringPTR = &str;
	std::string &stringREF = str;

    // Display the address of strings in memory.
    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

	//Display value of strings
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;


    return 0;
}