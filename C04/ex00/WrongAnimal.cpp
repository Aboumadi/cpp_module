#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal(void): type("Animal")
{
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	*this = copy;
	std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal const	&WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal assignment operator" << std::endl;
	this->type = copy.type;
	return (*this);
}

std::string const	&WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal made a sound!" << std::endl;
}
