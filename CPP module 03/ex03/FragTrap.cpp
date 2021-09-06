#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = name;
	this->hitpoints = 100;
	this->energyHitpoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap: constructor is called." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energyHitpoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap: constructor with name is called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	*this = fragtrap;
	std::cout << "FragTrap: copy constructor is called." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &fragtrap)
{
	if (&fragtrap == this)
		return *this;
    this->name = fragtrap.name;
	this->hitpoints = fragtrap.hitpoints;
	this->energyHitpoints = fragtrap.energyHitpoints;
	this->attackDamage = fragtrap.attackDamage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: destructor for " << this->name << " is called." << std::endl;
}

void FragTrap::highFivesGuys (void)
{
	std::cout << "FragTrap " << this->name << " gave high five." << std::endl;
}

