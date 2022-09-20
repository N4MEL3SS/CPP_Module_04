#include <iostream>

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	AAnimal *dog = new Dog;
	AAnimal *cat = new Cat;

	dog->makeSound();
	cat->makeSound();

//	const AAnimal *aAnimal = new AAnimal();
//	aAnimal->makeSound();

	return 0;
}
