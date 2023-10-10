#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon &weapon) : mName(name), mWeapon(weapon) {
    std::cout << this->mName << " is created" << std::endl;
}

void    HumanA::attack(void) {
    std::cout << this->mName << " attacks with their ";
    std::cout << this->mWeapon.getType() << std::endl;
}

HumanA::~HumanA () {
    std::cout << this->mName << " is destroyed" << std::endl;
}