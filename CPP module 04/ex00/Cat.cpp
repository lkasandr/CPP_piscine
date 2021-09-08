#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
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
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << getType() << " said meow!" << std::endl;
}