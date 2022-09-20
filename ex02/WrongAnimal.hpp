#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);

	virtual ~WrongAnimal();

	WrongAnimal & operator = (const WrongAnimal &other);

	void makeSound() const;
	std::string getType() const;

protected:
	std::string type;

};

#endif //WRONG_ANIMAL_HPP
