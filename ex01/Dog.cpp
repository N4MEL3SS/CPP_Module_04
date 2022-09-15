#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "---Dog class---" << std::endl;

	this->type = "Dog";
	this->brain = new Brain();

	std::cout << this->type << ": constructed (" << this << ")" << std::endl;
	std::cout << std::endl;
}

Dog::Dog(const Dog &other)
{
	std::cout << "---Dog class---" << std::endl;

	this->type = other.type;
	this->brain = new Brain(*other.brain);

	std::cout << this->type << ": copy constructed (" << this << ")" << std::endl;
	std::cout << std::endl;
}

Dog::~Dog()
{
	std::cout << "---Dog class---" << std::endl;
	delete this->brain;
	std::cout << this->type << ": destroyed (" << this << ")" << std::endl;
}

Dog &Dog::operator = (const Dog &other)
{
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*other.brain);

	return *this;
}

void Dog::makeSound() const
{
	std::cout << this->type << ": WoW...WoW...So much WoW" << std::endl;
}

Brain *Dog::getBrain() const
{
	return this->brain;
}

void Dog::showIdeas() const
{
	brain->showIdeas();
}
