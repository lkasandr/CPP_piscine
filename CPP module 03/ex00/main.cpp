#include "ClapTrap.hpp"

int main()
{
    ClapTrap one;
    ClapTrap two("Vasya");
    ClapTrap three(one);
    ClapTrap four("Petya");

    two.attack("Petya");
    four.takeDamage(1);
    four.attack("Vasya");
    two.takeDamage(2);
    four.beRepaired(3);
    two.beRepaired(3);

    return 0;
}