#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	private:
		std::string name;
		unsigned int hitpoints;
		unsigned int energyHitpoints;
		unsigned int attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &claptrap);
		ClapTrap& operator= (const ClapTrap &claptrap);
		~ClapTrap();
		std::string getName(void) const;
		unsigned int getHitpoints(void) const;
		unsigned int getEnergyHitpoints(void) const;
		unsigned int getAttackDamage(void) const;
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif