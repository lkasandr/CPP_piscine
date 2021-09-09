#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "Cat: default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
	std::cout << "Cat: copy constructor called" << std::endl;
}

Cat& Cat::operator= (const Cat &cat)
{
	if (this == &cat)
		return *this;
	this->type = cat.type;
	delete this->brain;
	this->brain = new Brain(*cat.brain);
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat: destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << getType() << " said meow!" << std::endl;
}