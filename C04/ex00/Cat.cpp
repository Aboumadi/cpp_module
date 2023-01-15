#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor." << std::endl;
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor." << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Cat copy constructor." << std::endl;
	this->type = other.type;
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat assignment operator" << std::endl;
	this->type = copy.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!!" << std::endl;
}

const std::string &Cat::getType() const
{
	return Animal::getType();
}
