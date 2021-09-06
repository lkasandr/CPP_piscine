#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "noname";
	this->hitpoints = 100;
	this->energyHitpoints = 50;
	this->attackDamage = 20;
    std::cout << "ScavTrap: constructor is called." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energyHitpoints = 50;
	this->attackDamage = 20;
    std::cout << "ScavTrap: constructor with name is called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	*this = scavtrap;
    std::cout << "ScavTrap: copy constructor is called." << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap &scavtrap)
{
	if (&scavtrap == this)
		return *this;
    this->name = scavtrap.name;
	this->hitpoints = scavtrap.hitpoints;
	this->energyHitpoints = scavtrap.energyHitpoints;
	this->attackDamage = scavtrap.attackDamage;
	return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: destructor for " << this->name << " is called." << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    if (this->energyHitpoints < this->attackDamage)
	{
		std::cout << "ScavTrap " << this->name << " can't attack! :(" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " attack " << target << ", causing "
		<< this->attackDamage << " points of damage!" << std::endl;
		this->energyHitpoints -= this->attackDamage;
	}
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode" << std::endl;
}
