#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
WrongCat::WrongCat(void): _type("Cat")
{
	std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy)
{
	*this = copy;
	std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat const	&WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "WrongCat assignment operator" << std::endl;
	this->_type = copy._type;
	return (*this);
}

std::string const	&WrongCat::getType(void) const
{
	return WrongAnimal::getType();
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat made a sound!" << std::endl;
}
