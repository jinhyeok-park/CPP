#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
    std::cout << "FragTrap defulat constructor" << std::endl;
    this->mName = "FragTrap defulat";
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

FragTrap &FragTrap::operator=(FragTrap const &input) {
    if (this != &input)
    {
        this->mName = input.mName;
        this->mAttackDamage = input.mAttackDamage;
        this->mEnergyPoints = input.mEnergyPoints;
        this->mHitPoints = input.mHitPoints;
    }
    return *this;
}
void    FragTrap::attack(std::string target) {
    if (this->mEnergyPoints && this->mHitPoints > 0)
    {
        std::cout << "FragTrap ";
        std::cout << this->mName << " attacks " << target;
        std::cout << ", causing " << this->mAttackDamage << " points of damage!" << std::endl;
        this->mEnergyPoints--;
    }
    else if (!this->mEnergyPoints)
        std::cout << "not enough energy!" << std::endl;
    else if (this->mHitPoints <= 0)
        std::cout << "not enough hitpoints" << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap destroyer" << std::endl;
}

void    hightFiveGuys(void) {
    
}