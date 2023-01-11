#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor." << std::endl;
	_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor." << std::endl;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor." << std::endl;
	_type = other._type;
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog assignment operator" << std::endl;
	this->_type = copy._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof!!" << std::endl;
}

const std::string &Dog::getType() const
{
	return Animal::getType();
}
