#include "Zombie.hpp"

int main(void)
{
    Zombie  *test;
    Zombie  mainstack("mainstack");

    mainstack.announce();
    test = newZombie("tom");
    test->announce();
    randomChump("jerry");
    delete(test);
}