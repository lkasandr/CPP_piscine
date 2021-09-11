#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		this->equipedArray[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource &ms)
{
	for(int i = 0; i < 4; i++)
	{
		this->equipedArray[i] = 0;
	}
	*this = ms;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &ms)
{
	if (this == &ms)
		return *this;
	for(int i = 0; i < 4; i++)
	{
		if (this->equipedArray[i])
			delete this->equipedArray[i];
		this->equipedArray[i] = ms.equipedArray[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->equipedArray[i])
			delete this->equipedArray[i];
	}
}

void MateriaSource::learnMateria(AMateria* copy)
{
    int i = 0;
	while (i < 4)
	{
		if (!this->equipedArray[i])
		{
			this->equipedArray[i] = copy;
			break;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    std::string getType;
	
	if (type != "ice" && type != "cure")
        return 0;
    else
    {
        for (int i=0; i<4; i++)
		{
			if (this->equipedArray[i])
			{
				getType = this->equipedArray[i]->getType();
				if (!getType.compare(type))
					return this->equipedArray[i]->clone();
			}
		}
		return (0);
    }
}