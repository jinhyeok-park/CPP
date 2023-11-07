#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    std::cout << "MateriaSource constructor" << std::endl;
    for (int i = 0 ; i < MAX_STORE ; i++)
        this->mStore[i] = NULL;
    this->mStoreSize = 0;
}

MateriaSource::~MateriaSource(void) {
    std::cout << "MateriaSource destroy" << std::endl;
    for (int i = 0 ; i < this->mStoreSize ; i++)
    {
        delete this->mStore[i];
        this->mStore[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &other){ 
    std::cout << "MateriaSource cpy constructor" << std::endl;
    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other){ 
    if (this != &other)
    {
        for (int i = 0 ; i < this->mStoreSize ; i ++)
        {
            delete this->mStore[i];
            this->mStore[i] = NULL;
        }
        if (other.mStoreSize)
        {
            for (int i = 0 ; i < MAX_STORE ; i++)
            {
                if (other.mStore[i]->getType() == "ice")
                    this->mStore[i] = new Ice();
                else if (other.mStore[i]->getType() == "cure")
                    this->mStore[i] = new Cure();
            }
        }
        else
            *this->mStore = NULL;
        this->mStoreSize = other.mStoreSize;
    }
    return *this;
}

void    MateriaSource::learnMateria(AMateria *materia) {
    std::cout << "learn Materia" << std::endl;
    if (this->mStoreSize < MAX_STORE)
    {
        this->mStore[this->mStoreSize] = materia;
        this->mStoreSize++;
    }
    else
    {
        std::cout << "Store size is full" << std::endl;
        delete materia;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    std::cout << "createMateria" << std::endl;
    for (int i = 0 ; i < MAX_STORE ; i++)
    {
        if (this->mStore[i]->getType() == type)
            return this->mStore[i]->clone();
    }
    std::cout << "you need to learn the type" << std::endl;
    return NULL;
}