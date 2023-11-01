#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public :
    FragTrap(void);
    ~FragTrap(void);
    FragTrap(const FragTrap &input);
    FragTrap(std::string input);
    FragTrap &operator=(const FragTrap &input);

    void    highFivesGuys(void);
};

#endif 