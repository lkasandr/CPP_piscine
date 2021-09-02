#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->hitpoints = 10;
	this->energyHitpoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 10;
	this->energyHitpoints = 10;
	this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{

}

ClapTrap::ClapTrap(const ClapTrap &claptrap) : name(claptrap.name), hitpoints(claptrap.hitpoints), 
energyHitpoints(claptrap.energyHitpoints), attackDamage(claptrap.attackDamage)
{

}

ClapTrap& ClapTrap::operator= (const ClapTrap &claptrap)
{
	this->name = claptrap.name;
	this->hitpoints = claptrap.hitpoints;
	this->energyHitpoints = claptrap.energyHitpoints;
	this->attackDamage = claptrap.attackDamage;
	return (*this);
}

