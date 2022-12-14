#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";

	std::cout << "---Dog class---" << std::endl;
	std::cout << this->type << ": constructed (" << this << ")" << std::endl;
	std::cout << std::endl;
}

Dog::Dog(const Dog &other)
{
	this->type = other.type;

	std::cout << "---Dog class---" << std::endl;
	std::cout << this->type << ": copy constructed (" << this << ")" << std::endl;
	std::cout << std::endl;
}

Dog::~Dog()
{
	std::cout << "---Dog class---" << std::endl;
	std::cout << this->type << ": destroyed (" << this << ")" << std::endl;
}

Dog &Dog::operator = (const Dog &other)
{
	this->type = other.type;

	return *this;
}

void Dog::makeSound() const
{
	std::cout << this->type << ": WoW...WoW...So much WoW" << std::endl;
}
