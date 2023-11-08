#include "Character.hpp"

Character::Character(void) {
    std::cout << "Character Constructor" <<std::endl;
    this->mName = "defualt";
    this->mIndexInventory = -1;
    for (int i = 0 ; i < MAX_INVENTORY ; i++)
        this->mInventory[i] = NULL;
    this->mTrashCan = new AMateria *[MAX_TRASHCAN];
    for (int i = 0 ; i < MAX_TRASHCAN ; i++)
        this->mTrashCan = NULL;
    this->mTrashCanIndex = 0;
    this->mTrashSizeUp = 1;
}

Character::~Character(void) {
    for (int i = 0 ; i < this->mTrashCanIndex; i ++)
    {
        delete this->mTrashCan[i];
        this->mTrashCan[i] = NULL;
    }
    delete [] this->mTrashCan;
    std::cout << "Character destroy" << std::endl;
}

Character::Character(std::string name) {
    std::cout << "Charcter Constructor" <<  std::endl;
    this->mName = name;
    this->mIndexInventory = -1;
    for (int i = 0 ; i < MAX_INVENTORY ; i++)
        this->mInventory[i] = NULL;
    this->mTrashCan = new AMateria *[MAX_TRASHCAN];
    for (int i = 0 ; i < MAX_TRASHCAN ; i++)
        this->mTrashCan[i] = NULL;
    this->mTrashCanIndex = 0;
    this->mTrashSizeUp = 1;
}

Character::Character(const Character & other) {
    std::cout << "Character cpy constructor" << std::endl;
    *this = other;
}

void    trashDeleter(int size, AMateria ** &trashCan) {
    for (int i = 0 ; i < size * MAX_TRASHCAN ; i ++)
    {
        if (trashCan[i])
            delete trashCan[i];
    }
    delete [] trashCan;
}

Character &Character::operator=(const Character & other) {
    std::cout << "Character operator" << std::endl;
    if (this != &other)
    {
        if (other.mIndexInventory != -1)
        {
            for (int i = 0 ; i < 4 ; i ++)
               this->mInventory[i] = other.mInventory[i];
            this->mIndexInventory = other.mIndexInventory;
            trashDeleter(this->mTrashSizeUp, this->mTrashCan);
            AMateria **trashTemp = new AMateria *[other.mTrashSizeUp * MAX_TRASHCAN];
            for (int i = 0 ; i < this->mTrashSizeUp * MAX_TRASHCAN ; i++)
                trashTemp[i] = other.mTrashCan[i];
            this->mTrashCan = trashTemp;
            this->mTrashCanIndex = other.mTrashCanIndex;
        }
        else
            *this->mInventory = NULL;
        this->mName = other.mName;
    }
    return *this;
}

std::string const & Character::getName(void) const {
    return this->mName;
}

void    Character::equip(AMateria *m) {
    int flag = 1;

    if (m == NULL)
    {
        std::cout << "NULL check again" << std::endl;
        return ;
    }
    for (int i = 0 ; i < MAX_TRASHCAN * this->mTrashSizeUp ; i ++)
    {
        if (this->mTrashCan[i] != NULL && this->mTrashCan[i] == m)
            flag = 0;
    }
    if (flag == 1)
    {
        if (this->mTrashCanIndex >= MAX_TRASHCAN * this->mTrashSizeUp)
        {
            this->mTrashSizeUp++;
            AMateria **temp = new AMateria *[MAX_TRASHCAN * this->mTrashSizeUp];
            for (int i = 0 ; i < this->mTrashCanIndex; i ++)
                temp[i] = this->mTrashCan[i];
            delete[] this->mTrashCan;
            temp[this->mTrashCanIndex++] = m;
            this->mTrashCan = temp;
        }
        else
            this->mTrashCan[this->mTrashCanIndex++] = m;
    }
    if (this->mIndexInventory < 3)
    {
        this->mIndexInventory++;
        this->mInventory[this->mIndexInventory] = m;
    }
    else
        std::cout << "Charactor inventory is full" << std::endl;
}

void    Character::unequip(int idx) {
    if (idx < 4)
        this->mInventory[idx] = NULL;
    else
        std::cout << "check index range" << std::endl;
}

void    Character::use(int idx, ICharacter &target) {
    if (idx <= this->mIndexInventory && mIndexInventory >= 0 && idx < 4)
    {
        std::cout << "this end" << std::endl;
        this->mInventory[idx]->use(target);
    }
    else 
        std::cout << "out of range" << std::endl;
}