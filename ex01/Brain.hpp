#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
public:
	Brain();
	Brain(const Brain &other);

	~Brain();

	Brain & operator = (const Brain &other);

	std::string *getIdeas() const;
	void showIdeas() const;

private:
	std::string *ideas;
};

#endif //BRAIN_HPP
