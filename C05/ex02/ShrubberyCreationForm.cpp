#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm default constructor " << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): AForm(target, 145, 137)
{
    std::cout << "ShrubberyCreationForm constructor parametrize " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy): AForm(copy)
{
    std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
}

ShrubberyCreationForm const &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    (void) other;
    std::cout << "ShrubberyCreationForm assignement operator" << std::endl;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::string name;
    name = executor.getName() + "_shrubbery";
    std::ofstream	file(name);
}