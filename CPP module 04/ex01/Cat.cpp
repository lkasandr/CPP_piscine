#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "Cat: default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	this->brain = NULL;
	*this = cat;
}

Cat& Cat::operator= (const Cat &cat)
{
	if (this == &cat)
		return *this;
	this->type = cat.type;
	if (this->brain)
	{
		delete this->brain;
		this->brain = NULL;
	}
	this->brain = new Brain(*cat.brain);
	return *this;
}

Cat::~Cat()
{
	if (this->brain)
	{
		delete this->brain;
		this->brain = NULL;
	}
	std::cout << "Cat: destructor called" << std::endl;
}

Brain* Cat::getBrain(void)
{
	return this->brain;
}

void Cat::makeSound(void) const
{
	std::cout << getType() << " said meow!" << std::endl;
}