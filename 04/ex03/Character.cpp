#include "Character.hpp"

Character::Character(void) {
    std::cout << "Character Constructor" <<std::endl;
    this->mName = "defualt";
    this->mIndexInventory = -1;
    *this->mInventory = NULL;
}

Character::~Character(void) {
    std::cout << "Character destroy" << std::endl;
}

Character::Character(std::string name) {
    std::cout << "Charcter Constructor" <<  std::endl;
    this->mName = name;
    this->mIndexInventory = -1;
    *this->mInventory = NULL;
}

Character::Character(const Character & other) {
    std::cout << "Character cpy constructor" << std::endl;
    *this = other;
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
    if (mIndexInventory >= 0 && idx < 4)
        this->mInventory[idx]->use(target);
    else 
        std::cout << "out of range" << std::endl;
}