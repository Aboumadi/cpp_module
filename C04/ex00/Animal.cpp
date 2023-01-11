#include "Animal.hpp"

Animal::Animal(): _type("default") {
	std::cout << "Animal constructor." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor." << std::endl;
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
	std::cout << "Animal copy constructor" << std::endl;
}

Animal 	&Animal::operator=(Animal const &copy)
{
	std::cout << "Animal assignment operator" << std::endl;
	this->_type = copy._type;
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "animal sound" << std::endl;
}

const std::string & Animal::getType() const {
	return this->_type;
}
