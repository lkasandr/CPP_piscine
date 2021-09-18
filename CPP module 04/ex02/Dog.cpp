#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "Dog: default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	this->brain = NULL;
	*this = dog;
}

Dog& Dog::operator= (const Dog &dog)
{
	if (&dog == this)
		return *this;
	this->type = dog.type;
	if (this->brain)
	{
		delete this->brain;
		this->brain = NULL;
	}
	this->brain = new Brain(*dog.brain);
	return *this;
}

Dog::~Dog()
{
	if (this->brain)
	{
		delete this->brain;
		this->brain = NULL;
	}
	std::cout << "Dog: destructor called" << std::endl;
}

Brain* Dog::getBrain(void)
{
	return this->brain;
}

void Dog::makeSound(void) const
{
	std::cout << getType() << " said woof!" << std::endl;
}