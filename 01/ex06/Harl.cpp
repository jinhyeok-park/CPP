#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n"
              << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"
              << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n"
              << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now."\
              << std::endl;
}

void Harl::complain(std::string level)
{
    int i;

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            break;
    }
    switch (i)
    {
    case 0:
    {
        std::cout << "[ "  << levels[0] << " ]" <<std::endl;
        (this->*f[0])();
    }
    case 1:
    {
        std::cout << "[ "  << levels[1] << " ]" <<std::endl;
        (this->*f[1])();
    }
    case 2:
    {
        std::cout << "[ "  << levels[2] << " ]" <<std::endl;
        (this->*f[2])();
    }
    case 3:
    {
        std::cout << "[ "  << levels[3] << " ]" <<std::endl;
        (this->*f[3])();
        break;
    }
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}