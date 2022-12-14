#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";

	std::cout << "---Cat class---" << std::endl;
	std::cout << this->type << ": constructed (" << this << ")" << std::endl;
	std::cout << std::endl;
}

Cat::Cat(const Cat &other)
{
	this->type = other.type;

	std::cout << "---Cat class---" << std::endl;
	std::cout << this->type << ": copy constructed (" << this << ")" << std::endl;
	std::cout << std::endl;
}

Cat::~Cat()
{
	std::cout << "---Cat class---" << std::endl;
	std::cout << this->type << ": destroyed (" << this << ")" << std::endl;
}

Cat &Cat::operator = (const Cat &other)
{
	this->type = other.type;

	return *this;
}

void Cat::makeSound() const
{
	std::cout << this->type << ": Nya...Nya...Nya" << std::endl;
}
