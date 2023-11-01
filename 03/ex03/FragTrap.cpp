#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
    std::cout << "FragTrap defualt constructor" << std::endl;
    this->mName = "FragTrap defualt";
    this->mHitPoints = 100;
    this->mEnergyPoints = 100;
    this-> mAttackDamage = 30;
}

FragTrap::FragTrap(std::string name) {
    std::cout << "FragTrap name constructor" << std::endl;
    this->mName = name;
    this->mHitPoints = 100;
    this->mEnergyPoints = 100;
    this->mAttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &input) {
    if (this != &input)
    {
        this->mName = input.mName;
        this->mAttackDamage = input.mAttackDamage;
        this->mEnergyPoints = input.mEnergyPoints;
        this->mHitPoints = input.mHitPoints;
    }
    return *this;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap destroyer called" << std::endl;
}

void    FragTrap::highFivesGuys(void) {
    if (this->mHitPoints > 0)
        std::cout << "high five guys!" << std::endl;
    else 
        std::cout << "aleady die.." << std::endl;
}