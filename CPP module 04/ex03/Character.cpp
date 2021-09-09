#include "Character.hpp"

Character::Character() : name("noname")
{
	for (int i=0; i < 4; ++i)
		equipedArray[i] = 0;
}

Character::Character(std::string name) : name(name)
{
	
}

Character::Character(const Character &player)
{
	*this = player;
}

Character& Character::operator=(const Character &player)
{
	if (this == &player)
		return *this;
	this->name = player.name;
	for (int i=0; i < 4; ++i)
	{
		if (equipedArray[i])
			delete equipedArray[i];
	}
	for (int i=0; i < 4; ++i)
	{
		if (!equipedArray[i])
			equipedArray[i] = player.equipedArray[i]->clone();
	}
	return *this;
}

Character::~Character()
{

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
		if (this->equipedArray[i] != 0)
			this->equipedArray[i] = m;
		i++;
	}
	std::cout << "equiped" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx > 4 || idx < 1)
	{
		std::cout << "Wrong index (1 - 4)" << std::endl;
		return;
	}
	else
	{
		this->equipedArray[idx] = NULL;
	}
	std::cout << "unequiped" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 4 || idx < 1)
	{
		std::cout << "Wrong index (1 - 4)" << std::endl;
		return;
	}
	else
	{
		this->equipedArray[idx]->use(target);
	}
}