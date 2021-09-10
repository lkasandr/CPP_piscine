#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{

}

MateriaSource::MateriaSource(const MateriaSource &ms)
{

}

MateriaSource& MateriaSource::operator=(const MateriaSource &ms)
{

}

MateriaSource::~MateriaSource()
{

}

void MateriaSource::learnMateria(AMateria* copy)
{
    int i = 0;
	while (i < 4)
	{
		if (!this->equipedArray[i])
			this->equipedArray[i] = copy;
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type != "Ice" && type != "Cure")
        return 0;
    else
    {
        
    }
}