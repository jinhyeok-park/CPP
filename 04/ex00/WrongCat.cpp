#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("default cat") {
    std::cout << "WrongCat defulat constructor" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
    std::cout << "WrongCat type Constructor" << std::endl;
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat destroy" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other){
    std::cout << "WrongCat copy constructor" << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    std::cout << "WrongCat operator" << std::endl;
    if (this != &other)
    {
        WrongAnimal::operator=(other);
    }
    return *this;
}

void    WrongCat::makeSound(void) const {
    std::cout << "WrongCat yaong~" << std::endl;
}