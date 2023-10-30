#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : FragTrap, ScavTrap{

private :
    std::string mName;
public :
    DiamondTrap(void);
    ~DiamondTrap(void);
};

#endif