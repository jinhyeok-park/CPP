#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "AMateria.hpp"

class Ice : public AMateria{

public :
    Ice(void);
    ~Ice(void);
    Ice(const Ice &other);
    Ice &operator=(const Ice &other);
    virtual AMateria* clone(void) const;
};

#endif