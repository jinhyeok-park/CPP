#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap() {
    std::cout << "Diamond defulat constructor" << std::endl;
    this->mName = "Diamond default";
    mName += "_Clap_name";
    ClapTrap::mName = this->mName;
    // std::cout << this->mAttackDamage << std::endl;
    // std::cout << this->mEnergyPoints << std::endl;
    // std::cout << this->mHitPoints << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name) {
    std::cout << "Diamond name constructor" << std::endl;
}

void    DiamondTrap::attack(std::string name){
    ScavTrap::attack(name);
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "Diamond destroyer called" << std::endl;
}