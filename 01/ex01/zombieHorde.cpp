#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

    Zombie *ret = new Zombie[N];
    std::string stringtemp;

    for (int i = 0 ; i < N ; i++)
    {
        std::stringstream temp;
        temp << i;
        stringtemp = name + temp.str();
        ret[i].setName(stringtemp);
    }
    return ret;
}