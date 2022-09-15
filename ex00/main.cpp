#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "=========Create=========" << std::endl;
	const Animal* meta = new Animal();
	std::cout << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	std::cout << std::endl;
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "=========getType=========" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << "========makeSound========" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "======wrongGetType======" << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << "=====wrongMakeSound=====" << std::endl;
	wrongCat->makeSound();
	wrongAnimal->makeSound();
	std::cout << std::endl;

	std::cout << "=========Delete=========" << std::endl;
	delete i;
	delete j;
	delete meta;

	delete wrongCat;
	delete wrongAnimal;

	return 0;
}
