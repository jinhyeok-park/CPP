#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {
    std::cout << "Ice constructor" << std::endl;
}

Ice::~Ice(void) {
    std::cout << "Ice destroy" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other){
    std::cout <<  "Ice cpy constructor" << std::endl;
    *this = other;
}

Ice &Ice::operator=(const Ice &other) {
    std::cout << "Ice operator" <<  std::endl;
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

AMateria * Ice::clone(void) const {
    std::cout <<  "Ice clone"<< std::endl;
    return new Ice();
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at ";
    std::cout << target.getName();
    std::cout << " *" << std::endl;
}