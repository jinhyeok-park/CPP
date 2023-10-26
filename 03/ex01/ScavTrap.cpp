#include "ScavTrap.hpp"

// ScavTrap::ScavTrap(void) : mName("default"), mHitPoints(100) , mEnergyPoint(50), mAttackDamage(20) {
//     std::cout << "scavtrap default constructor"  << std::endl;
// }

// ScavTrap::ScavTrap(std::string &name) : mName(name), mHitPoints(100) , mEnergyPoint(50), mAttackDamage(20) {
// }

// ScavTrap::ScavTrap(void) : mName("default"), mHitPoints(100) , mEnergyPoint(50), mAttackDamage(20) {

// }

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

ScavTrap::~ScavTrap(void) {
    std::cout << "scavtrap destroyer called" << std::endl;
}