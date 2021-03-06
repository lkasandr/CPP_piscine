#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->name = "noname";
	ClapTrap::name = "noname_clap_name";
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

void DiamondTrap::attack(std::string const & target)
{
	std::cout << "DiamonTrap attack: " << std::endl;
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap: " << this->name << " ClapTrap: " << ClapTrap::name << std::endl;
}

