#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
    private :
    std::string mType;

    public :
    const std::string   &getType (void) const;
    void                setType (const std::string &str);

    Weapon (void);
    ~Weapon (void);
    Weapon (const std::string str);
};

#endif