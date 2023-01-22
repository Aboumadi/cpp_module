#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

//enum name_form {robo , pres, shru};
//const char *name_f[] = {"robotomy request","presidential pardon", "shrubbery creation"};

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


/*AForm *Intern::makeForm(std::string namef, std::string targetf)
{
    std::string forms[4] = {"robotomy request","presidential pardon", "shrubbery creation"};
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
}*/

AForm *Intern::makeForm(std::string name_f, std::string target_f)
{
    int i;
    AForm *(Intern::*fun[4])(std::string name_f, std::string target_f) = {&Intern::noForm, &Intern::robotomy, &Intern::presidential, &Intern::shrubbery};
    i = (name_f == "robotomy request") * 1 + (name_f == "presidential pardon") * 2 + (name_f == "shrubbery creation") * 3;
    std::cout<<i<<std::endl;
    return (this->*fun[i])(name_f, target_f);
}

AForm *Intern::noForm(std::string name, std::string target)
{
    (void)name;
    (void)target;
    throw (AForm::FormNotFound());
    return NULL;
}

AForm *Intern::robotomy(std::string name, std::string target)
{
    std::cout<<"Intern Creat "<<name<<std::endl;
    return new RobotomyRequestForm(target);
}

AForm *Intern::shrubbery(std::string name, std::string target)
{
    std::cout<<"Intern Creat "<<name<<std::endl;
    return new ShrubberyCreationForm(target);
}

AForm *Intern::presidential(std::string name, std::string target)
{
    std::cout<<"Intern Creat "<<name<<std::endl;
    return new PresidentialPardonForm(target);
}

/*char const *Intern::FormNotFound::what() const throw()
{
    return ("Form does not exist");
}*/
