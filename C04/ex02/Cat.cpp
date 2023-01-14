#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor." << std::endl;
	_type = "Cat";
	this->Cerv = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor." << std::endl;
	delete Cerv;
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	std::cout << "Cat copy constructor." << std::endl;
	//this->_type = copy._type;
	//Cerv = new Brain(*copy.Cerv);
	*this = copy;
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat assignment operator" << std::endl;
	//if (Cerv)
	//	delete Cerv;
	//this->_type = copy._type;
	//*this->Cerv = *copy.Cerv;
	Cerv = new Brain();
	*Cerv = *copy.Cerv;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!!" << std::endl;
}
