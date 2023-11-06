#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#define MAX_STORE 30

class MateriaSource : IMateriaSource {
private :
    AMateria *mStore[MAX_STORE];
    int       mStoreSize;
public :
    MateriaSource(void);
    ~MateriaSource(void);
    MateriaSource(const MateriaSource &other);
    MateriaSource &operator=(const MateriaSource &other);
    void learnMateria(AMateria* materia);
    AMateria* createMateria(std::string const type);
};

#endif