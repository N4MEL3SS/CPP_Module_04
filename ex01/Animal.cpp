#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Gazebo";

	std::cout << "---Animal class---" << std::endl;
	std::cout << this->type << ": constructed (" << this << ")" << std::endl;
}

Animal::Animal(const Animal &other)
{
	this->type = other.type;

	std::cout << "---Animal class---" << std::endl;
	std::cout << this->type << ": copy constructed (" << this << ")" << std::endl;
}

Animal::~Animal()
{
	std::cout << "---Animal class---" << std::endl;
	std::cout << this->type << ": destroyed (" << this << ")" << std::endl;
	std::cout << std::endl;
}

Animal &Animal::operator = (const Animal &other)
{
	this->type = other.type;

	return *this;
}

void Animal::makeSound() const
{
	std::cout << this->type << ": Gazebo ignores you." << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}
