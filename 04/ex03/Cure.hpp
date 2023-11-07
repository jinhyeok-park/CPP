#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

public :
    Cure(void);
    ~Cure(void);
    Cure(const Cure &other);
    Cure &operator=(const Cure &other);

    void use(ICharacter& target);
    AMateria* clone() const;
};

#endif