#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap test;
    ScavTrap test1;
    FragTrap test3;

    ClapTrap *test4 = new ClapTrap;
    ScavTrap *test5 = new ScavTrap;
    FragTrap *test6 = new FragTrap;

    test5->takeDamage(100000);
    test5->guardGate();
    test6->highFivesGuys();

    test.attack("test");
    test1.attack("test1");
    test3.attack("test3");

    delete(test4);
    delete(test5);
    delete(test6);
}