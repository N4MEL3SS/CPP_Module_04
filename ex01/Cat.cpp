#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "---Cat class---" << std::endl;

	this->type = "Cat";
	brain = new Brain();

	std::cout << this->type << ": constructed (" << this << ")" << std::endl;
	std::cout << std::endl;
}

Cat::Cat(const Cat &other)
{
	std::cout << "---Cat class---" << std::endl;

	this->type = other.type;
	this->brain = new Brain(*other.brain);

	std::cout << this->type << ": copy constructed (" << this << ")" << std::endl;
	std::cout << std::endl;
}

Cat::~Cat()
{
	std::cout << "---Cat class---" << std::endl;
	delete this->brain;
	std::cout << this->type << ": destroyed (" << this << ")" << std::endl;
}

Cat &Cat::operator = (const Cat &other)
{
	std::cout << this->type << ": operator = (" << this << ")" << std::endl;

	this->type = other.type;
	delete (this->brain);
	this->brain = new Brain(*other.brain);

	return *this;
}

void Cat::makeSound() const
{
	std::cout << this->type << ": Nya...Nya...Nya" << std::endl;
}

Brain *Cat::getBrain() const
{
	return this->brain;
}

void Cat::showIdeas() const
{
	brain->showIdeas();
}
