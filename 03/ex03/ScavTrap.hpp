#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public :
    ScavTrap(void);
    ~ScavTrap(void);
    ScavTrap(const std::string &name);
    ScavTrap(ScavTrap const &input);
    ScavTrap &operator=(ScavTrap const &input);
    void guardGate(void);
    void attack(std::string name);
};

#endif