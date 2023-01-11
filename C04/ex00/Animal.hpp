#pragma once
#include <iostream>
class Animal {
public:
	Animal();
	Animal(const Animal &copy);
	virtual ~Animal();

	Animal &operator=(const Animal &other);
	virtual void makeSound() const;
	virtual const std::string& getType() const;

protected:
	std::string _type;
};
