#pragma once
#include "AForm.hpp"

class Intern
{
public:
    //constructor and destructor
    Intern();
    ~Intern();
    Intern(Intern const &copy);

    //operators
    Intern &operator=(Intern const &other);

    //members
    AForm               *makeForm(std::string const namef, std::string targerf);
    AForm               *noForm(std::string name, std::string target);
    AForm               *shrubbery(std::string name, std::string target);
    AForm               *robotomy(std::string name, std::string target);
    AForm               *presidential(std::string name, std::string target);


    //handling
    /*class FormNotFound: std::exception
    {
        public:
        char const *what() const throw();
    };*/
};
