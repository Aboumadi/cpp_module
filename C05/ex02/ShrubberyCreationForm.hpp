#pragma once
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
public:
    //constructor and destructor
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(ShrubberyCreationForm const &copy);
    ~ShrubberyCreationForm();

    //operators
    ShrubberyCreationForm const &operator=(ShrubberyCreationForm const &other);

    //Member fonction
    void  execute(Bureaucrat const &executor) const;
};
