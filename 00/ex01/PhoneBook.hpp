#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include <limits>

#define MARGINRIGHT 15

class PhoneBook {

private:
    Contact mContacts[8];
    int     index;

public :
    PhoneBook();

    std::string cutLength(std::string str);
    bool        checkSpace(std::string str);
    void        addData();
    void        searchData();
};

#endif