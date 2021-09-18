#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap one;
    ClapTrap two("Player1");
    ClapTrap three(one);
    ClapTrap four("Player2");

    ScavTrap five;
    ScavTrap six("Player3");
    ScavTrap seven(five);
    ScavTrap eight("Player4");

    three = two;
    seven = six;
    two.attack("Player2");
    four.takeDamage(1);
    four.attack("Player1");
    two.takeDamage(2);
    four.beRepaired(3);
    two.beRepaired(3);

    six.attack("Player4");
    eight.takeDamage(10);
    eight.attack("Player3");
    six.takeDamage(10);
    eight.beRepaired(10);
    six.beRepaired(10);
    eight.guardGate();
    six.guardGate();

    three.attack("abc");
    seven.attack("def");

    return 0;
}