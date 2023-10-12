#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

    Zombie *ret = new(std::nothrow) Zombie[N];
    std::string stringtemp;
    if (!ret)
        return NULL;
    for (int i = 0 ; i < N ; i++)
    {
        std::stringstream temp;
        temp << i;
        stringtemp = name + temp.str();
        ret[i].setName(stringtemp);
    }
    return ret;
}