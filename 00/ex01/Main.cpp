#include "PhoneBook.hpp"

int main(void)
{
    std::string input;
    PhoneBook contact_container;

    while (1)
    {
        if (std::cin.eof()) {
            return 1;
        }
        std::cout << "Enter Your Command {ADD, SEARCH, EXIT}" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof()) {
            return 1;
        }
        if (input == "ADD")
        {
            contact_container.addData();
        }
        else if (input == "SEARCH")
        {
            contact_container.searchData();
        }
        else if (input == "EXIT")
            break;
        else
        {
            std::cout << "Not Found, Check Your Command!" << std::endl;
        }
    }
    return (0);
}