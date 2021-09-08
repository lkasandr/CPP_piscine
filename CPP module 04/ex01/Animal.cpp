#include "Animal.hpp"

Animal::Animal(void) : type("unknown animal")
{
	std::cout << "Animal: default constructor called" << std::endl;
}

Animal::Animal(std::string name) : type(name)
{
	std::cout << "Animal: default constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal: destructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
	std::cout << "Animal: copy constructor called" << std::endl;
}

Animal& Animal::operator= (const Animal &animal)
{
	if (this == &animal)
		return *this;
	this->type = animal.type;
	return *this;
}

std::string Animal::getType(void) const
{
	return this->type;
}

void Animal::makeSound(void) const
{
	std::cout << this->type << " said quack-quack!" << std::endl;
}