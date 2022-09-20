#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongGazebo";

	std::cout << "---WrongAnimal class---" << std::endl;
	std::cout << this->type << ": constructed (" << this << ")" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	this->type = other.type;

	std::cout << "---WrongAnimal class--- (" << this << ")" << std::endl;
	std::cout << this->type << ": copy constructed (" << this << ")" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "---WrongAnimal class---" << std::endl;
	std::cout << this->type << ": destroyed (" << this << ")" << std::endl;
	std::cout << std::endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &other)
{
	this->type = other.type;

	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << this->type << ": WrongGazebo is attacking you." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
