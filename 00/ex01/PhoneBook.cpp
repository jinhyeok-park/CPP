#include "PhoneBook.hpp"

std::string PhoneBook::cutLength(std::string input) {

    if (input.length() > 10)
    {
        input = input.substr(0,9);
        input += ".";
    }
    return input;
}

PhoneBook::PhoneBook() {
    this->index = 0;
}

void PhoneBook::addData() {

    std::string input;
    Contact     contact;

    std::cout << "Enter First Name" << std::endl;
    std::getline(std::cin, input);
    for (int i = 0 ; i < 5 ; i++)
    {
        if (std::cin.eof()) {
            return ;
        }
        if (this->checkSpace(input))
        {
            std::cout << "input value is empty try again" << std::endl;
            return ;
        }
        if (input.empty())
        {
            std::cout << "input value is empty try again" << std::endl;
            return;
        }
        if (i == 0)
        {
            contact.setFirstName(input);
            std::cout << "Enter Last Name" << std::endl;
            std::getline(std::cin, input);
        }
        else if (i == 1)
        {
            contact.setLastName(input);
            std::cout << "Enter NickName" << std::endl;
            std::getline(std::cin, input);
        }
        else if (i == 2)
        {
            contact.setNickName(input);
            std::cout << "Enter Phone Number" << std::endl;
            std::getline(std::cin, input);
        }
        else if (i == 3)
        {
            contact.setPhoneNumber(input);
            std::cout << "Enter Darkest Secret" << std::endl;
            std::getline(std::cin, input);
        }
        else if (i == 4)
            contact.setDarkestSecret(input);
    }
    this->mContacts[this->index % 8] = contact;
    this->index++;
}

bool PhoneBook::checkSpace(std::string str) {
    for (size_t i = 0 ; i < str.length() ; i++)
    {
        if (!std::isspace(str[i]))
            return false;
    }
    return true;
}

void PhoneBook::searchData() {

    int  input;

    std::cout << "|";
    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "NickName" << "|" << std::endl;

    for (int i = 0 ; i < (this->index < 8 ? this->index : 8); i ++)
    {
        std::cout << "|";
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << this->cutLength(this->mContacts[i].getFirstName()) << "|";
        std::cout << std::setw(10) << this->cutLength(this->mContacts[i].getLastName()) << "|";
        std::cout << std::setw(10) << this->cutLength(this->mContacts[i].getNickName()) << "|" << std::endl;
    }
    std::cout << "Enter the Index That you want to see!" << std::endl;
    std::cin >> input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Only digit" << std::endl;
        return ;
    }
    if (this->index == 0)
        std::cout << "Table Is Empty" << std::endl;
    else if (input < (this->index < 8 ? this->index % 8 : 8) && input > -1)
    {
        std::cout << std::left << std::setw(MARGINRIGHT) << "First Name";
        std:: cout << " : ";
        std::cout << this->mContacts[(input)].getFirstName() << std::endl;
        std::cout << std::setw(MARGINRIGHT) << "Last Name";
        std:: cout << " : ";
        std::cout << this->mContacts[(input)].getLastName() << std::endl;
        std::cout << std::setw(MARGINRIGHT) << "Nick Name";
        std:: cout << " : ";
        std::cout << this->mContacts[(input)].getNickName() << std::endl;
        std::cout << std::setw(MARGINRIGHT) << "Phone Number";
        std:: cout << " : ";
        std::cout << this->mContacts[(input)].getPhonNumber() << std::endl;
        std::cout << std::setw(MARGINRIGHT) << "Darkest Secret";
        std:: cout << " : ";
        std::cout << this->mContacts[(input)].getDarkestSecret() << std::endl;
    }
    else
    {
        std::cout << "Out of Index Range!" << std::endl;
    }
}