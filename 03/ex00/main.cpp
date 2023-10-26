#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("test");
    ClapTrap b("jin");
    a.beRepaired(10);
    a.attack("jin");
    a.takeDamage(10);
    b.takeDamage(10);
    b.takeDamage(10);
    std::cout << a.getEnergyPoints() << std::endl;
    std::cout << a.getHitPoints() << std::endl;
    a.attack("jin");
    a.attack("jin");
    a.attack("jin");
    a.attack("jin");
    a.attack("jin");
    a.attack("jin");
    a.attack("jin");
    a.attack("jin");
    a.attack("jin");
    a.attack("jin");
}