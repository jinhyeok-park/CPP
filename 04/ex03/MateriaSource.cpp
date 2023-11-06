#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    std::cout << "MateriaSource constructor" << std::endl;
    for (int i = 0 ; i < MAX_STORE ; i++)
        this->mStore[i] = NULL;
    this->mStoreSize = 0;
}

MateriaSource::~MateriaSource(void) {
    std::cout << "MateriaSource destroy" << std::endl;
    delete [] this->mStore;
}

MateriaSource::MateriaSource(const MateriaSource &other){ 
    std::cout << "MateriaSource cpy constructor" << std::endl;
    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other){ 
    if (this != &other)
    {
        delete [] mStore;
        if (other.mStoreSize)
        {
            for (int i = 0 ; i < MAX_STORE ; i++)
            {
            }
        }
        else
            *this->mStore = NULL;
        this->mStoreSize = other.mStoreSize;
    }
    return *this;
}
