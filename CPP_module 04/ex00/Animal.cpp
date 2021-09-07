#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "unknown";
	std::cout << "Animal: default constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal: destructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	this->type = animal.type;
	std::cout << "Animal: copy constructor called" << std::endl;
}

Animal& Animal::operator= (const Animal &animal)
{
	if (&animal == this)
		return *this;
	this->type = animal.type;
	return *this;
}

void Animal::makeSound(void)
{
	std::cout << this->type << " says something" << std::endl;
}