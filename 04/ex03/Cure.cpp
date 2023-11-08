#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void) : AMateria("cure") {
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
    std::cout << "Cure opertator" << std::endl;
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

void Cure::use(ICharacter& target) {
    
    std::cout << "* heals ";
    std::cout << target.getName();
    std::cout << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const {
    std::cout << "Cure clone" << std::endl;
    return new Cure(); 
}
