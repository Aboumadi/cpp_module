#include "Animal.hpp"

Animal::Animal(): type("default") {
	std::cout << "Animal constructor." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor." << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = copy;
}

Animal 	&Animal::operator=(Animal const &copy)
{
	std::cout << "Animal assignment operator" << std::endl;
	this->type = copy.type;
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "animal sound" << std::endl;
}

const std::string & Animal::getType() const {
	return this->type;
}
