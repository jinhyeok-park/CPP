#include "Zombie.hpp"

void Zombie::announce (void) {
    std::cout << this->name << ": ";
    std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string str) {
    this->name = str;
    std::cout << str << " created!" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "zombie destroyed" << std::endl;
}