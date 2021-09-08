#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog: default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	*this = dog;
	std::cout << "Dog: copy constructor called" << std::endl;
}

Dog& Dog::operator= (const Dog &dog)
{
	if (&dog == this)
		return *this;
	this->type = dog.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog: destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << getType() << " said woof!" << std::endl;
}