#include "Zombie.hpp"

int main(void)
{
    Zombie *test;

    test = newZombie("tom");
    test->announce();
    randomChump("jerry");
}