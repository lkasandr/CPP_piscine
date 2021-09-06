#include "ClapTrap.hpp"

int main()
{
    ClapTrap one;
    ClapTrap two("Vasya");
    ClapTrap three(one);
    ClapTrap four("Petya");
    ClapTrap five(two);

    one = two;

    two.attack("Petya");
    four.takeDamage(1);
    four.attack("Vasya");
    two.takeDamage(2);
    four.beRepaired(3);
    two.beRepaired(3);

    one.attack("abcd");

    return 0;
}