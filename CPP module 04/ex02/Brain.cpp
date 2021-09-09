#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	*this = brain;
	std::cout << "Brain: copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &brain)
{
	if (this == &brain)
		return (*this);
	for (int i=0; i < 100; ++i)
		ideas[i] = brain.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain: destructor called" << std::endl;
}