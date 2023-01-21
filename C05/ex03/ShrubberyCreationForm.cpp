#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    //std::cout << "ShrubberyCreationForm default constructor " << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //std::cout << "ShrubberyCreationForm destructor " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): AForm(target, 145, 137)
{
    //std::cout << "ShrubberyCreationForm constructor parametrize " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy): AForm(copy)
{
    //std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
}

ShrubberyCreationForm const &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    (void) other;
    //std::cout << "ShrubberyCreationForm assignement operator" << std::endl;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (GetisSigned() && executor.getGrade() <= GetExecGrad())
    {
        std::string name;
        name = executor.getName() + "_shrubbery";
        //std::ofstream	file(name);
        //std::ofstream	file(executor.getName() + "_shrubbery");
        std::ofstream file;
        file.open((executor.getName() + "_shrubbery").c_str());
        if (file.is_open())
        {
            //std::string tree;
            file <<     "    oxoxoo    ooxoo\n"
						"  ooxoxo oo  oxoxooo\n"
						" oooo xxoxoo ooo ooox\n"
						" oxo o oxoxo  xoxxoxo\n"
						"  oxo xooxoooo o ooo\n"
						"    ooo\\oo\\  /o/o\n"
						"        \\  \\/ /\n"
						"         |   /\n"
						"         |  |\n"
						"         | D|\n"
						"         |  |\n"
						"         |  |\n"
						"  ______/____\\____";
            file.close();
        }
        else
            std::cout << "Cannot open the file: " << Getname() + "_shrubbery" << std::endl;
    }
    else
        throw GradeTooLowException();
}
