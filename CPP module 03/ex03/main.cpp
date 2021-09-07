#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    // DiamondTrap a;
    // DiamondTrap b(a);
    // DiamondTrap c("Player1");

    // c.attack("Player2");
    // c.whoAmI();
    // b.whoAmI();


    DiamondTrap clown("clown");
    clown.whoAmI();
    clown.attack("goatman");
    clown.guardGate();
    clown.highFivesGuys();
    // return 0;

    return 0;
}