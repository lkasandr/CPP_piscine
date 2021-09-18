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


    DiamondTrap clown("Player1");
    clown.whoAmI();
    clown.attack("Player2");
    clown.guardGate();
    clown.highFivesGuys();
    // return 0;

    return 0;
}