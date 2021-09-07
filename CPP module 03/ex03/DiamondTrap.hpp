#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"


class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
	std::string name;

	public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &diamondtrap);
	DiamondTrap& operator=(const DiamondTrap &diamondtrap);
	~DiamondTrap();
	void attack(std::string const & target);
	void whoAmI(void);
};

#endif