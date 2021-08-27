#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::HumanB(std::string name, Weapon *weapon_type)
{
	this->name = name;
	this->weapon_type = weapon_type;
}

void HumanB::setWeapon(Weapon &weapon_type)
{
	this->weapon_type = &weapon_type;
}

void HumanB::attack()
{
	if (this->weapon_type)
		std::cout << this->name << " attacks with his " << this->weapon_type->getType() << std::endl;
	else
		std::cout << this->name << " runs away..." << std::endl;
}