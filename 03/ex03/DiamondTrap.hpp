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
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &other);
    DiamondTrap &operator=(DiamondTrap const &other);

    void attack(std::string target);
};

#endif