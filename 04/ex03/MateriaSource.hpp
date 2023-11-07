#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#define MAX_STORE 4


class MateriaSource : public IMateriaSource {

private :
    AMateria *mStore[MAX_STORE];
    int       mStoreSize;

public :
    MateriaSource(void);
    ~MateriaSource(void);
    MateriaSource(const MateriaSource &other);
    MateriaSource &operator=(const MateriaSource &other);

    void learnMateria(AMateria* materia);
    AMateria* createMateria(std::string const & type);
};

#endif