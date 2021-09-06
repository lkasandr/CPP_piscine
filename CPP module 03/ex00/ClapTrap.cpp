#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "noname";
	this->hitpoints = 10;
	this->energyHitpoints = 10;
	this->attackDamage = 0;
	std::cout << "The constructor for " << this->name << " is called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 10;
	this->energyHitpoints = 10;
	this->attackDamage = 0;
	std::cout << "The constructor for " << this->name << " is called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor for " << this->name << " is called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) : name(claptrap.name), hitpoints(claptrap.hitpoints), 
energyHitpoints(claptrap.energyHitpoints), attackDamage(claptrap.attackDamage)
{
	std::cout << "The copy constructor for " << this->name << " is called." << std::endl;
}

std::string ClapTrap::getName(void) const
{
	return this->name;
}

unsigned int ClapTrap::getHitpoints(void) const
{
	return this->hitpoints;
}

unsigned int ClapTrap::getEnergyHitpoints(void) const
{
	return this->energyHitpoints;
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return this->attackDamage;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &claptrap)
{
	if (&claptrap == this)
		return *this;
	this->name = claptrap.getName();
	this->hitpoints = claptrap.getHitpoints();
	this->energyHitpoints = claptrap.getEnergyHitpoints();
	this->attackDamage = claptrap.getAttackDamage();

	return *this;
}

void ClapTrap::attack(std::string const & target)
{
	if (this->energyHitpoints < this->attackDamage)
	{
		std::cout << "Claptrap " << this->name << " can't attack! :(" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " attack " << target << ", causing "
		<< this->attackDamage << " points of damage!" << std::endl;
		this->energyHitpoints -= this->attackDamage;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitpoints <= amount)
	{
		std::cout << "ClapTrap " << this->name << " took fatal damage... :(" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage" << std::endl;
		this->hitpoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitpoints + amount > 10)
		std::cout << "ClapTrap " << this->name << " repaired " << 10 - this->hitpoints << " hitpoints" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " repaired " << amount << " hitpoints" << std::endl;
	
	if (this->energyHitpoints + amount > 10)
		std::cout << "ClapTrap " << this->name << " repaired " << 10 - this->energyHitpoints << " energy hitpoints" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " repaired " << amount << " hitpoints" << std::endl;
}