#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public :
    FragTrap(void);
    ~FragTrap(void);
    FragTrap(FragTrap const &input);
    FragTrap(std::string input);
    FragTrap &operator=(FragTrap const &input);
    void    attack(std::string name);

    void    highFivesGuys(void);
};

#endif 