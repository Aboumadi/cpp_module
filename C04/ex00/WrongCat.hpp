#pragma once
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
protected:
    std::string	_type;
public:
    WrongCat();
    WrongCat(std::string const &type);
	WrongCat(WrongCat const &copy);
    ~WrongCat();
    WrongCat const	&operator=(WrongCat const &copy);
    std::string const	&getType(void) const;
    void	makeSound(void) const;
};
