#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scavmon("scav");
    ScavTrap test(scavmon);
    
    ClapTrap clapmon("clap");

    clapmon.attack("scav");
    scavmon.takeDamage(clapmon.getAttackDamage());
    scavmon.attack("clap");
    clapmon.takeDamage(scavmon.getAttackDamage());
    clapmon.attack("scav");
    scavmon.takeDamage(clapmon.getAttackDamage());
    clapmon.attack("scav");
    scavmon.takeDamage(clapmon.getAttackDamage());
    scavmon.takeDamage(10000);
    scavmon.guardGate();
}