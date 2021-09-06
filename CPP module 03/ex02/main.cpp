#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap a;
    FragTrap b("Player1");
    FragTrap c(a);
    FragTrap d;
    FragTrap e("Player2");

    d = e;

    a.attack("Player2");
    b.beRepaired(10);
    c.highFivesGuys();
    d.attack("abcd");
    e.takeDamage(20);

    return 0;
}