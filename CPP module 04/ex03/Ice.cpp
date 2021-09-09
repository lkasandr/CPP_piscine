#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &ice)
{
	*this = ice;
}

Ice& Ice::operator=(const Ice &ice)
{
	if (this == &ice)
		return *this;
	this->type = ice.type;
	return *this;
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}