#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
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
	delete this->brain;
	this->brain = new Brain(*dog.brain);
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog: destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << getType() << " said woof!" << std::endl;
}