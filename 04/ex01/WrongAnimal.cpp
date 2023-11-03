#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    std::cout << "WrongAnimal defualt constructor" << std::endl;
    this->type = "default type";
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal destroy" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
    this->type = type;
    std::cout << "WrongAnimal type constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

std::string WrongAnimal::getType(void) const {
    return this->type;
}

void WrongAnimal::setType(std::string input){ 
    this->type = input;
}

void    WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal ,, what is your sound?"  << std::endl;
}