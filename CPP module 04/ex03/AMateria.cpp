#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "no type";
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &materia)
{
	*this = materia;
}

AMateria& AMateria::operator=(const AMateria &materia)
{
	if (this == &materia)
		return *this;
	return *this;
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << " uses any materia" << std::endl;
}

