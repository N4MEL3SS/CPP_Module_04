#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";

	std::cout << "---WrongCat class---" << std::endl;
	std::cout << this->type << ": constructed (" << this << ")" << std::endl;
	std::cout << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	this->type = other.type;

	std::cout << "---WrongCat class---" << std::endl;
	std::cout << this->type << ": copy constructed (" << this << ")" << std::endl;
	std::cout << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "---WrongCat class---" << std::endl;
	std::cout << this->type << ": destroyed (" << this << ")" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &other)
{
	this->type = other.type;

	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << this->type << ": You know, if I grow a thumb on my front paws, you'll become useless to me." << std::endl;
}
