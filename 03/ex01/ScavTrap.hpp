#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

public :
    ScavTrap(void);
    ~ScavTrap(void);
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &input);
    ScavTrap &operator=(const ScavTrap &input);
    void guardGate(void);
    void attack(const std::string &name);
};

#endif