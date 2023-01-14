#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


/*int main() {
	std::cout << "let's see what happens in a cat brain :"<< std::endl;
	Cat* test = new Cat;
	Cat* copy = new Cat(*test);

	// Display Ideas.
	std::cout << test->getBrain() << std::endl;
	//test->getBrain();
	delete test;
	std::cout << copy->getBrain() << std::endl;
	//copy->getBrain();
	delete copy;
	return 0;
}*/


int main()
{
    Dog *dog = new Dog();
    Dog *dog01 = new Dog(*dog);
    Cat *cat = new Cat();
    Cat *cat01 = new Cat(*cat);

    Animal *array[4] = {dog, dog01,cat, cat01};
    for (int i = 0; i < 4; i++)
        array[i]->makeSound();
	for (int i = 0; i < 4; i++)
        delete array[i];
    //delete array[0];
    //delete array[2];
    return 0;
}

/*int main (void)
{
	const Animal* meta[4];
	for (int i = 0; i < 2; i++)
		meta[i] = new Cat;
	for (int i = 2; i < 4; i++)
		meta[i] = new Dog;

	std::cout << std::endl;

	Dog dog;
	{
		Dog test;
		test = dog;
	}
	
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete meta[i];

	std::cout << std::endl;
	return 0;
}*/
