#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap 
{
	protected:
	static const unsigned int hp_buf = 100;
	static const unsigned int ad_buf = 30;

	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &fragtrap);
	FragTrap& operator=(const FragTrap &fragtrap);
	~FragTrap();
	void highFivesGuys (void);
};

#endif