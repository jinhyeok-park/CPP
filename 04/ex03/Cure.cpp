#include "Cure.hpp"

Cure::Cure(void) : AMateria("Cure") {
    std::cout << "Cure constructor" << std::endl;
}

Cure::~Cure(void) {
    std::cout << "Cure destroy" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other) {
    std::cout << "Cure cpy constructor" << std::endl;
    *this = other;
}

Cure &Cure::operator=(const Cure &other) {
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return *this;
}