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
    std::cout << "index init 0" << std::endl;
    this->index = 0;
}

void PhoneBook::addData() {

    std::string input;
    Contact     contact;

    std::cout << "Enter First Name" << std::endl;
    std::cin >> input;
    contact.setFirstName(input);
    std::cout << "Enter Last Name" << std::endl;
    std::cin >> input;
    contact.setLastName(input);
    std::cout << "Enter NickName" << std::endl;
    std::cin >> input;
    contact.setNickName(input);
    std::cout << "Enter Phone Number" << std::endl;
    std::cin >> input;
    contact.setPhoneNumber(input);
    std::cout << "Enter Darkest Secret" << std::endl;
    std::cin >> input;
    contact.setDarkestSecret(input);
    this->mContacts[this->index % 8] = contact;
    this->index++;
}

void PhoneBook::searchData() {

    std::string input;

    std::cout << "|";
    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "NickName" << "|" << std::endl;

    for (int i = 0 ; i < this->index % 8 ; i ++)
    {
        std::cout << "|";
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << this->cutLength(this->mContacts[i].getFirstName()) << "|";
        std::cout << std::setw(10) << this->cutLength(this->mContacts[i].getLastName()) << "|";
        std::cout << std::setw(10) << this->cutLength(this->mContacts[i].getNickName()) << "|" << std::endl;
    }
    std::cin >> input;
    if (this->index == 0)
        std::cout <<"is Empty" << std::endl;
    else if (std::stoi(input) < this->index % 8 && std::stoi(input) > -1)
    {
        std::cout << "is correct";
    }
}