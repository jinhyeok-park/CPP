#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"){
    std::cout << "dog defulat constructor" << std::endl;
    this->mBrain = new Brain();
}

Dog::Dog(std::string type) : Animal(type) {
    std::cout << "dog type constructor"  << std::endl;
    this->mBrain = new Brain();
}

Dog::~Dog(void) {
    delete(this->mBrain);
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
        if (this->mBrain)
            delete (this->mBrain);
        if (other.mBrain)
            this->mBrain = new Brain(*other.mBrain);
        else
            this->mBrain = NULL;
    }
    return *this;
}

void    Dog::makeSound(void) const {
    std::cout << "dog bark bark~" << std::endl;
}

Brain &Dog::getBrain(void) {
    return *this->mBrain;
}
