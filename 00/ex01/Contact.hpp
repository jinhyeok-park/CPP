#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {

private:
    std::string mFirstName;
    std::string mLastName;
    std::string mNickName;
    std::string mPhoneNumber;
    std::string mDarkestSecret;
public:
    void        setFirstName(const std::string &str);
    void        setLastName(const std::string &str);
    void        setNickName(const std::string &str);
    void        setPhoneNumber(const std::string &str);
    void        setDarkestSecret(const std::string &str);
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhonNumber() const;
    std::string getDarkestSecret() const;
};

#endif