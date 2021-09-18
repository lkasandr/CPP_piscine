#include "ClapTrap.hpp"

int main()
{
    ClapTrap one;
    ClapTrap two("Player1");
    ClapTrap three(one);
    ClapTrap four("Player2");
    ClapTrap five(two);

    one = two;

    two.attack("Player2");
    four.takeDamage(1);
    four.attack("Player1");
    two.takeDamage(2);
    four.beRepaired(3);
    two.beRepaired(3);

    one.attack("abcd");

    return 0;
}