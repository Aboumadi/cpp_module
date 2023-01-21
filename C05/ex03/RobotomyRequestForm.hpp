#pragma once
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
public:
    //constructor and destructor
    RobotomyRequestForm();
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(RobotomyRequestForm const &copy);
    ~RobotomyRequestForm();

    //operators
    RobotomyRequestForm const &operator=(RobotomyRequestForm const &other);

    //Member fonction
    void  execute(Bureaucrat const & executor) const;
};
