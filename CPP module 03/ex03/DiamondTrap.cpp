#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	this->name = "noname";
	this->hitpoints = this->FragTrap::hp_buf;
	this->energyHitpoints = this->ScavTrap::ehp_buf;
	this->attackDamage = this->FragTrap::ad_buf;
	std::cout << "DiamondTrap: constructor is called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hitpoints = this->FragTrap::hp_buf;
	this->energyHitpoints = this->ScavTrap::ehp_buf;
	this->attackDamage = this->FragTrap::ad_buf;
	std::cout << "DiamondTrap: constructor is called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap)
{
	*this = diamondtrap;
	std::cout << "DiamondTrap: copy constructor is called." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	if (&diamondtrap == this)
		return *this;
    this->name = diamondtrap.name;
	this->hitpoints = diamondtrap.hitpoints;
	this->energyHitpoints = diamondtrap.energyHitpoints;
	this->attackDamage = diamondtrap.attackDamage;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: " << this->name << " destructor is called." << std::endl;
}


