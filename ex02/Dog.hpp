#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
public:
	Dog();
	Dog(const Dog &other);

	~Dog();

	Dog & operator = (const Dog &other);

	void makeSound() const;
	void showIdeas() const;
	Brain *getBrain() const;

private:
	Brain *brain;
};

#endif //DOG_HPP
