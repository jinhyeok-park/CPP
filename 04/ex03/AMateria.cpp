#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
    std::cout << "AMateria type constructor" << std::endl;
    this->type = type;
}

AMateria::~AMateria(void) {
    std::cout << "Amateria destroy" << std::endl;
}

std::string const &AMateria::getType(void) const {
    return this->type;
}

AMateria::AMateria(const AMateria & other) {
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other ){
    if (this != &other)
        this->type = other.type;
    return *this;
}

void    AMateria::use(ICharacter &target) {
    (void)target;
    std::cout << "use AMataria" << std::endl;
}