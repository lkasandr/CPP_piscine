#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "noname";
	this->hitpoints = 100;
	this->energyHitpoints = 50;
	this->attackDamage = 20;
	std::cout << "ClapTrap: constructor is called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energyHitpoints = 50;
	this->attackDamage = 20;
	std::cout << "ClapTrap: constructor with name is called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: destructor for " << this->name << " is called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) : name(claptrap.name), hitpoints(claptrap.hitpoints), 
energyHitpoints(claptrap.energyHitpoints), attackDamage(claptrap.attackDamage)
{
	std::cout << "ClapTrap: copy constructor is called." << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &claptrap)
{
	this->name = claptrap.name;
	this->hitpoints = claptrap.hitpoints;
	this->energyHitpoints = claptrap.energyHitpoints;
	this->attackDamage = claptrap.attackDamage;
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
	if (this->hitpoints + amount > 100)
		std::cout << "ClapTrap " << this->name << " repaired " << 100 - this->hitpoints << " hitpoints" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " repaired " << amount << " hitpoints" << std::endl;
	
	if (this->energyHitpoints + amount > 100)
		std::cout << "ClapTrap " << this->name << " repaired " << 100 - this->energyHitpoints << " energy hitpoints" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " repaired " << amount << " hitpoints" << std::endl;
}