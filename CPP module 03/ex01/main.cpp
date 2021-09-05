#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap one;
    ClapTrap two("Vasya");
    ClapTrap three(one);
    ClapTrap four("Petya");

    ScavTrap five;
    ScavTrap six("Marina");
    ScavTrap seven(five);
    ScavTrap eight("Vasilisa");

    two.attack("Petya");
    four.takeDamage(1);
    four.attack("Vasya");
    two.takeDamage(2);
    four.beRepaired(3);
    two.beRepaired(3);

    six.attack("Vasilisa");
    eight.takeDamage(10);
    eight.attack("Marina");
    six.takeDamage(10);
    eight.beRepaired(10);
    six.beRepaired(10);
    eight.guardGate();
    six.guardGate();

    return 0;
}