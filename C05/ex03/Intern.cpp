#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

enum name_form {robo , pres, shru};
const char *name_f[] = {"robotomy request","presidential pardon", "shrubbery creation"};

Intern::Intern()
{
    //std::cout<<"intern default constructor" <<std::endl;
}

Intern::~Intern()
{
    //std::cout<<"intern destructor" <<std::endl;
}

Intern::Intern(Intern const &copy)
{
    *this = copy;
}

Intern &Intern::operator=(Intern const &other)
{
    (void) other;
    return *this;
}


AForm *Intern::makeForm(std::string namef, std::string targetf)
{
    std::string forms[3] = {"robotomy request","presidential pardon", "shrubbery creation"};
    //name_form N;
    //N = robo;
    int i = 0;
    while (namef != forms[i] && i < 3)
        i++;
    switch(i)
    {
        case 0:
            //namef = N;
            std::cout<<"Intern creates " << forms[i] << std::endl;
            return new RobotomyRequestForm(targetf);
        case 1:
            //namef = N;
            std::cout<<"Intern creates " << forms[i] << std::endl;
            return new RobotomyRequestForm(targetf);
        case 2:
            //namef = N;
            std::cout<<"Intern creates " << forms[i] << std::endl;
            return new RobotomyRequestForm(targetf);
        case 3:
            std::cout<<"|"<<i<<"|"<<std::endl;
            throw (Intern::FormNotFound());
    }
    return NULL;
}

char const *Intern::FormNotFound::what() const throw()
{
    return ("Form does not exist");
}
