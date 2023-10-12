#include "Zombie.hpp"

int main(void)
{
    Zombie *test;

    test = zombieHorde(3, "jin");
    if (!test)
        return 0;
    for (int i = 0 ; i < 3 ;  i ++)
    {
        test[i].announce();
    }
    delete [] test;
}