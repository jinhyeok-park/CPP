#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    std::string ret;
    if (ac == 2)
    {
        if (av && av[1])
        {
            ret = ScalarConverter::convert(av[1]);
            std::cout << ret;
        }
        
    }
    else
        std::cout <<  "check the value" <<std::endl;
    return (0);
}