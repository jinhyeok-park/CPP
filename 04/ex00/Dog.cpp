#include "Dog.hpp"

Dog::Dog(void) : Animal("defulat dog"){
    std::cout << "dog defulat constructor" << std::endl;
}

Dog::Dog(std::string type) : Animal(type){
    std::cout << "dog type constructor"  << std::endl;
}

Dog::~Dog(void) {
    std::cout << "dog destroy" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "dog copy constructor" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog operator" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
    }
    return *this;
}

void    Dog::makeSound(void) const {
    std::cout << "dog bark bark~" << std::endl;
}