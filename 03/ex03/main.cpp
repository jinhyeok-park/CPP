#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap test;
    test.attack("test");
    test.takeDamage(100000);
    test.attack("test");
}