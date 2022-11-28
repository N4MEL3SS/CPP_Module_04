#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
//#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
 protected:
	const std::string _type;
 public:
	AMateria();
	AMateria(AMateria const &other);
	AMateria(std::string const & type);

	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif //AMATERIA_HPP
