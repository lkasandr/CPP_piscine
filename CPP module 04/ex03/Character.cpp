#include "Character.hpp"

Character::Character() : name("noname")
{
	for (int i=0; i < 4; i++)
		equipedArray[i] = 0;
}

Character::Character(std::string name) : name(name)
{
	for (int i=0; i < 4; i++)
		equipedArray[i] = 0;
}

Character::Character(const Character &player)
{
	for (int i=0; i < 4; i++)
	{
		this->equipedArray[i] = 0;
	}
	*this = player;
}

Character& Character::operator=(const Character &player)
{
	if (this == &player)
		return *this;
	this->name = player.name;
	for (int i=0; i < 4; i++)
	{
		if (equipedArray[i])
			delete equipedArray[i];
	}
	for (int i=0; i < 4; i++)
	{
		if (!equipedArray[i])
			equipedArray[i] = player.equipedArray[i]->clone();
	}
	return *this;
}

Character::~Character()
{
	for (int i=0; i < 4; i++)
	{
		if (this->equipedArray[i])
			delete this->equipedArray[i];
	}
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4)
	{
		if (!this->equipedArray[i])
		{
			this->equipedArray[i] = m;
			break;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "Wrong index" << std::endl;
		return;
	}
	else
	{
		this->equipedArray[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if ((idx <= 3) && (idx >= 0) && this->equipedArray[idx])
	{
		this->equipedArray[idx]->use(target);
	}
	else
	{
		std::cout << "Wrong index" << std::endl;
		return;
	}
}