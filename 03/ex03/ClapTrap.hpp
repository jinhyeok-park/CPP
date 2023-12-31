#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

protected :
    std::string mName;
    int mHitPoints;
    int mEnergyPoints;
    int mAttackDamage;

public :
    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    int getHitPoints(void);
    int getEnergyPoints(void);
    int getAttackDamage(void);
    std::string getName(void);

    ClapTrap(void);
    ClapTrap(std::string name);
    virtual ~ClapTrap(void);
    ClapTrap(ClapTrap const &in);
    ClapTrap &operator=(ClapTrap const &in);
};

#endif