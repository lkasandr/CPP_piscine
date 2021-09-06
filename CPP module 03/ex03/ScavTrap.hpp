#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    protected:
    static const unsigned int ehp_buf = 50;

    public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &scavtrap);
    ScavTrap& operator= (const ScavTrap &scavtrap);
    ~ScavTrap();
    void attack(std::string const & target);
    void guardGate();
};

#endif