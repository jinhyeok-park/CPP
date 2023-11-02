#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "Animal defualt constructor" << std::endl;
    this->type = "default type";
}

Animal::~Animal(void) {
    std::cout << "Animal destroy" << std::endl;
}

Animal::Animal(std::string type) {
    this->type = type;
    std::cout << "Animal type constructor" << std::endl;
}

Animal::Animal(const Animal &other) {
    *this = other;
}

Animal &Animal::operator=(const Animal &other) {
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

std::string Animal::getType(void) {
    return this->type;
}

void Animal::setType(std::string input){ 
    this->type = input;
}

void    Animal::makeSound(void) {
    std::cout << "Animal ,, what is your sound?"  << std::endl;
}