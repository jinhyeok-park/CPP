#include "Cat.hpp"

Cat::Cat(void) : Animal("default cat") {
    std::cout << "Cat defulat constructor" << std::endl;
    this->mBrain = new Brain();
}

Cat::Cat(std::string type) : Animal(type) {
    std::cout << "Cat type Constructor" << std::endl;
    this->mBrain = new Brain();
}

Cat::~Cat(void) {
    delete(this->mBrain);
    std::cout << "Cat destroy" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other){
    std::cout << "Cat copy constructor" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat operator" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        Brain *temp = new Brain();
        if (this->mBrain)
            delete(this->mBrain);
        temp = other.mBrain;
        this->mBrain = temp;
    }
    return *this;
}

void    Cat::makeSound(void) const {
    std::cout << "Cat yaong~" << std::endl;
}
