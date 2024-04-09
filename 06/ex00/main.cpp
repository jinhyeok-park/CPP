#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        if (av && av[1])
        {
            ScalarConverter::convert(av[1]);
        }
    }
    else
        std::cout <<  "check the value" <<std::endl;
    return (0);
}