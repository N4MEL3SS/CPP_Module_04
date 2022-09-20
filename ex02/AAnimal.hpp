#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal
{
public:
	AAnimal();
	AAnimal(const AAnimal &other);

	virtual ~AAnimal();

	AAnimal & operator = (const AAnimal &other);

	virtual void makeSound() const = 0;
	std::string getType() const;

protected:
	std::string type;
};

#endif //ANIMAL_HPP
