#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scavmon("scav");
    ScavTrap test(scavmon);
    std::cout << test.getName() <<  std::endl;
    
    ClapTrap clapmon("clap");

    clapmon.attack("scav");
    scavmon.takeDamage(clapmon.getAttackDamage());
    scavmon.attack("clap");
    clapmon.takeDamage(scavmon.getAttackDamage());
    clapmon.attack("scav");
    scavmon.takeDamage(clapmon.getAttackDamage());
    clapmon.attack("scav");
    scavmon.takeDamage(clapmon.getAttackDamage());
    scavmon.guardGate();
}