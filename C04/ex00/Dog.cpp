#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor." << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor." << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
	std::cout << "Dog copy constructor." << std::endl;
	type = other.type;
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog assignment operator" << std::endl;
	this->type = copy.type;
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
