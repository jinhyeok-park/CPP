#include "Contact.hpp"

void    Contact::setFirstName (const std::string& str) {
    this->mFirstName = str;
}

void    Contact::setLastName (const std::string& str) {
    this->mLastName = str;
}

void    Contact::setNickName (const std::string& str) {
    this->mNickName = str;
}

void    Contact::setPhoneNumber (const std::string& str) {
    this->mPhoneNumber = str;
}

void    Contact::setDarkestSecret (const std::string& str) {
    this->mDarkestSecret = str;
}

std::string Contact::getFirstName () const {
    return this->mFirstName;
}

std::string Contact::getLastName () const {
    return this->mLastName;
}

std::string Contact::getNickName () const {
    return this->mNickName;
}

std::string Contact::getPhonNumber () const {
    return this->mPhoneNumber;
}

std::string Contact::getDarkestSecret () const {
    return this->mDarkestSecret;
}