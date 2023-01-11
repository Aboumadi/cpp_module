#pragma once
#include <iostream>
class WrongAnimal
{
protected:
    std::string	_type;
public:
    WrongAnimal();
    //WrongAnimal(std::string const &type);
	WrongAnimal(WrongAnimal const &copy);
    virtual ~WrongAnimal();
    WrongAnimal const	&operator=(WrongAnimal const &copy);
    std::string const	&getType(void) const;
    virtual void	makeSound(void) const;
};
