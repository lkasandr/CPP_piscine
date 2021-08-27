#include "Weapon.hpp"

Weapon::Weapon()
{
	this->weapon_type = "\0";
}

Weapon::Weapon(std::string weapon_type)
{
	this->weapon_type = weapon_type;
}

void Weapon::setType(std::string weapon_type)
{
	this->weapon_type = weapon_type;
}

std::string Weapon::getType() const
{
	return (this->weapon_type);
}