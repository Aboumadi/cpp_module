#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main() {

	/*const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

    delete j;
    delete i;
    delete meta;*/
    const WrongAnimal		*meta = new WrongAnimal();
    const WrongAnimal	*k = new WrongCat();
    k->makeSound();
	meta->makeSound();
    delete k;
    delete meta;
}
