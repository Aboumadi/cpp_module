#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain *Cerv;
public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog& other);
	virtual ~Dog();

	void makeSound() const;
};
