#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {

private:
    Contact mContacts[8];
    int     index;

public :
    PhoneBook(); //contstructer

    std::string cutLength(std::string str);
    void        addData();
    void        searchData();
};

#endif