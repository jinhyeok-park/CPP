#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : mName("default"), mHitPoints(10), mEnergyPoints(10), mAttackDamage(0) {
    std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : mName(name), mHitPoints(10), mEnergyPoints(10), mAttackDamage(0) {
    std::cout << "default constructor" << std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap destroyer called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other) {
    std::cout << "ClapTrap copy construct" <<  std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other)
    {
        this->mName = other.mName;
        this->mHitPoints = other.mHitPoints;
        this->mEnergyPoints = other.mEnergyPoints;
        this->mAttackDamage = other.mAttackDamage;
    }
    return *this;
}

int ClapTrap::getHitPoints(void){
    return this->mHitPoints;
}

int ClapTrap::getEnergyPoints(void){
    return this->mEnergyPoints;
}

int ClapTrap::getAttackDamage(void){
    return this->mAttackDamage;
}

std::string ClapTrap::getName(void) {
    return this->mName;
}

void    ClapTrap::attack(const std::string &target) {
    if (this->mEnergyPoints && this->mHitPoints > 0)
    {
        std::cout << "ClapTrap ";
        std::cout << this->mName << " attacks " << target;
        std::cout << ", causing " << this->mAttackDamage << " points of damage!" << std::endl;
        this->mEnergyPoints--;
    }
    else if (!this->mEnergyPoints)
        std::cout << "not enough energy!" << std::endl;
    else if (this->mHitPoints <= 0)
        std::cout << "not enough hitpoints" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "take damage" << std::endl;
    this->mHitPoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "repaire" << std::endl;
    this->mHitPoints += amount;
}
