#include "Cat.hpp"

Cat::Cat(void) : Animal("default cat") {
    std::cout << "Cat defulat constructor" << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
    std::cout << "Cat type Constructor" << std::endl;
}

Cat::~Cat(void) {
    std::cout << "Cat destroy" << std::endl;
}

Cat::Cat(const Cat &other) {
    std::cout << "Cat copy constructor" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat operator" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
    }
    return *this;
}

void    Cat::makeSound(void) {
    std::cout << "Cat yaong~" << std::endl;
}