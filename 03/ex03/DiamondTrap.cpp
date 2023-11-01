#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap() {
    std::cout << "Diamond defulat constructor" << std::endl;
    DiamondTrap::mName = "Diamond default";
    ClapTrap::mName = "Diamond default_clap_name";
    DiamondTrap::mEnergyPoints = ScavTrap::getEnergyPoint();
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name) {
    std::cout << "Diamond name constructor" << std::endl;
    this->mName = name;
    ClapTrap::mName = name + "_clap_name";
    DiamondTrap::mEnergyPoints = ScavTrap::getEnergyPoint();
}

DiamondTrap::DiamondTrap(DiamondTrap const &other) {
    *this = other;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other) {
    if(this != &other)
    {
        this->mName = other.mName;
        this->mAttackDamage = other.mAttackDamage;
        this->mEnergyPoints = other.mEnergyPoints;
        this->mHitPoints = other.mHitPoints;
    }
    return *this;
}

void    DiamondTrap::attack(const std::string &name){
    ScavTrap::attack(name);
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "Diamond destroyer called" << std::endl;
}

void    DiamondTrap::whoAmI(void) {
    std::cout << "My Name is ";
    std::cout << DiamondTrap::mName;
    std::cout << ", ClapTrap Name is ";
    std::cout << ClapTrap::mName << std::endl;
}