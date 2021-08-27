#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_type):name(name), weapon_type(weapon_type)
{
	
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon_type.getType() << std::endl;
}