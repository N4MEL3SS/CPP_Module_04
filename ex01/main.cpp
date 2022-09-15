#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "========CatCopy========" << std::endl;
	const Cat *floppa = new Cat();
	const Cat *bigFloppa = new Cat(*floppa);

	floppa->showIdeas();
	std::cout << std::endl;

	bigFloppa->showIdeas();
	std::cout << std::endl;

	delete bigFloppa;
	delete floppa;

	std::cout << "========CatAssignment========" << std::endl;
	Cat bingus;
	Cat bigBingus;

	bigBingus = bingus;
	std::cout << std::endl;

	bingus.showIdeas();
	std::cout << std::endl;

	bigBingus.showIdeas();
	std::cout << std::endl;

	std::cout << "=========Create=========" << std::endl;
	Animal *animals[6];
	for (int k = 0; k < 6; k++)
	{
		if (k < 3)
			animals[k] = new Dog;
		else
			animals[k] = new Cat;
	}

	std::cout << "========makeSound========" << std::endl;
	for (int k = 0; k < 6; k++)
		animals[k]->makeSound();
	std::cout << std::endl;

	std::cout << "=========Delete=========" << std::endl;
	for (int k = 0; k < 6; k++)
		delete animals[k];

	return 0;
}
