#include "Harl.hpp"

int main(int ac, char ** av)
{
    Harl test;

    if (ac == 2)
        test.complain(av[1]);
    else
        std::cout << "input error check it again" << std::endl;
}