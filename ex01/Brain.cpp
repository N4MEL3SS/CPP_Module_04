#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];

	for (int i = 0; i < 100; i++)
		this->ideas[i] = std::to_string(i + 1) + " electric Sheep";

	std::cout << "A brain has been constructed and filled with ideas" <<
	std::endl;
}

Brain::Brain(const Brain &other)
{
	std::string *ref_ideas = other.getIdeas();
	this->ideas = new std::string[100];

	for (int i = 0; i < 100; i++)
		this->ideas[i] = ref_ideas[i] + " and " + std::to_string(i + 1) + \
			" hedgehog in the fog";

	std::cout << "A brain has been copy constructed and stole the other's " \
		"ideas" << std::endl;
}

Brain::~Brain()
{
	delete[] this->ideas;
	std::cout << "A brain has been destroyed. Welcome to TikTok" << std::endl;
}

Brain &Brain::operator = (const Brain &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];

	return *this;
}

std::string *Brain::getIdeas() const
{
	return this->ideas;
}

void Brain::showIdeas() const
{
	for (int i = 0; i < 5; i++)
		std::cout << ideas[i] << std::endl;
}
