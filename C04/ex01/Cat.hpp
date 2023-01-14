#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain *Cerv;
public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat& other);
	virtual ~Cat();
	void makeSound() const;
};
