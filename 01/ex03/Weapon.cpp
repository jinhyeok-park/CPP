#include "Weapon.hpp"

Weapon::Weapon (void) {
    std::cout << "Weapon class created" << std::endl;
}

const std::string &Weapon::getType (void) const {
    return (this->mType);
}

void    Weapon::setType (const std::string &str) {
    this->mType = str;
}

Weapon::Weapon (const std::string str) {
    std::cout << str << " Weapon class created" << std::endl;
    this->mType = str;
}

Weapon::~Weapon (void) {
    std::cout << this->mType << " Weapon class destroyed" << std::endl;
}

