#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "Gazebo";

	std::cout << "---Animal class---" << std::endl;
	std::cout << this->type << ": constructed (" << this << ")" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	this->type = other.type;

	std::cout << "---Animal class---" << std::endl;
	std::cout << this->type << ": copy constructed (" << this << ")" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "---Animal class---" << std::endl;
	std::cout << this->type << ": destroyed (" << this << ")" << std::endl;
	std::cout << std::endl;
}

AAnimal &AAnimal::operator = (const AAnimal &other)
{
	this->type = other.type;

	return *this;
}

std::string AAnimal::getType() const
{
	return this->type;
}
