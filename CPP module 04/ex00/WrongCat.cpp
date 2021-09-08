#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat: default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat)
{
	this->type = cat.type;
	std::cout << "WrongCat: copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat &cat)
{
	if (this == &cat)
		return *this;
	this->type = cat.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << getType() << " said wrong-meow!" << std::endl;
}