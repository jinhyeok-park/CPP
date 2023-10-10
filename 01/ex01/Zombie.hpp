#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>

class Zombie {

private:
    std::string name;

public:
    void announce (void);
    void setName (std::string str);

    Zombie(std::string str);
    Zombie(void);
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif