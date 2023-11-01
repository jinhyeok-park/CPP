#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

private :
    std::string mName;
public :
    DiamondTrap(void);
    ~DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &other);
    DiamondTrap &operator=(const DiamondTrap &other);

    void attack(const std::string &target);
    void whoAmI(void);
};

#endif