#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap test("testis name");
    test.whoAmI();
    test.attack("awe");
    test.takeDamage(100000);
    test.attack("awe");
    test.guardGate();
    test.highFivesGuys();
}