#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &cure)
{
	*this = cure;
}

Cure& Cure::operator=(const Cure &cure)
{
	if (this == &cure)
		return *this;
	this->type = cure.type;
	return *this;
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds * " << std::endl;
}