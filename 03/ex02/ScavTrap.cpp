#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->mName = "scav Default";
    this->mHitPoints = 100;
    this->mEnergyPoints = 50;
    this->mAttackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name) {
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->mName = name;
    this->mHitPoints = 100;
    this->mEnergyPoints = 50;
    this->mAttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &input) : ClapTrap(input) {
    std::cout << "ScavTrap copy constructor"<< std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &input) {
    if (this != &input)
    {
        this->mName = input.mName;
        this->mAttackDamage = input.mAttackDamage;
        this->mEnergyPoints = input.mEnergyPoints;
        this->mHitPoints = input.mHitPoints;
    }
    return *this;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "scavtrap destroyer called" << std::endl;
}

void ScavTrap::guardGate(void){
    if (this->mHitPoints > 0)
        std::cout << this->mName << " is now in Gate keeper mode." << std::endl;
    else 
        std::cout << "aleady die.." << std::endl;
}

void    ScavTrap::attack(const std::string &target) {
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