#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	protected:
	std::string ideas[100];

	public:
	Brain();
	Brain(const Brain &brain);
	Brain& operator=(const Brain &brain);
	~Brain();
};

#endif