#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{

private :
    std::string mName;
public :
    DiamondTrap(void);
    ~DiamondTrap(void);
    
    void attack(std::string target);
};

#endif