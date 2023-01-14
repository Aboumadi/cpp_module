#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor." << std::endl;
	_type = "Dog";
	this->Cerv = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor." << std::endl;
	delete Cerv;
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	std::cout << "Dog copy constructor." << std::endl;
	//_type = copy._type;
	*this = copy;
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog assignment operator" << std::endl;
	//this->_type = copy._type;*
	//if (Cerv)
	//	delete Cerv;
	Cerv = new Brain();
	*Cerv = *copy.Cerv;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof!!" << std::endl;
}
