#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Weapon.hpp"

class HumanB {
    private :
    std::string mName;
    Weapon      *mWeapon;
    HumanB(void);

    public :
    HumanB (std::string mName);
    ~HumanB (void);
    void    setWeapon(Weapon &mWeapon);
    void    attack(void);
};

#endif 