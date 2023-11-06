#ifndef AMATERIA
#define AMATERIA

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

protected :
    std::string  type;

public :
    AMateria(std::string const & type);
    AMateria(const AMateria & other);
    virtual ~AMateria(void);
    AMateria &operator=(const AMateria & other);

    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif