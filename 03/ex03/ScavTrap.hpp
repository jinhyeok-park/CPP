#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
private :
    int mEnergyPoint;
public :
    ScavTrap(void);
    ~ScavTrap(void);
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &input);
    ScavTrap &operator=(const ScavTrap &input);
    void guardGate(void);
    void attack(const std::string &name);

    int getEnergyPoint(void);
};

#endif