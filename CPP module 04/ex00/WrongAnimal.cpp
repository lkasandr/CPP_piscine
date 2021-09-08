#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "unknown animal";
	std::cout << "WrongAnimal: default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : type(name)
{
	std::cout << "WrongAnimal: default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal: destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	this->type = animal.type;
	std::cout << "WrongAnimal: copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal &animal)
{
	if (this == &animal)
		return *this;
	this->type = animal.type;
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return(this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << this->type << " said quack-quack!" << std::endl;
}