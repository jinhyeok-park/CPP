#include "HumanB.hpp"

HumanB::HumanB (void){

}

HumanB::HumanB (std::string mName) {
    std::cout << mName << " is created" << std::endl;
    this->mName = mName;
    this->mWeapon = NULL;
}

void    HumanB::setWeapon(Weapon &mWeapon) {
    this->mWeapon = &mWeapon;
}

void    HumanB::attack(void) {
    if (!this->mWeapon)
        return ;
    std::cout << this->mName << " attacks with their ";
    std::cout << this->mWeapon->getType() << std::endl;
}

HumanB::~HumanB (void) {
    std::cout << this->mName << " is destroyed" << std::endl;
}