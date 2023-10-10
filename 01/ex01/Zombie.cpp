#include "Zombie.hpp"

void Zombie::announce (void) {
    std::cout << this->name << ": ";
    std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void) {
    std::cout << "no name created" << std::endl;
}

Zombie::Zombie(std::string str) {
    this->name = str;
    std::cout << str << " created!" << std::endl;
}

Zombie::~Zombie() {
    std::cout << this->name << " zombie destroyed" << std::endl;
}

void    Zombie::setName (std::string str) {
    this->name = str;
}
