#include "Character.hpp"

Character::Character(void) {
    std::cout << "Character Constructor" <<std::endl;
    this->mName = "defulat";
    this->mIndexInventory = 0;
    *this->mInventory = NULL;
}

Character::~Character(void) {
    delete(this->mInventory);
    std::cout << "Character destroy" << std::endl;
}

Character::Character(std::string name) {
    std::cout << "Charcter Constructor" <<  std::endl;
    this->mName = name;
    this->mIndexInventory = 0;
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
        

    }
}

std::string const & Character::getName(void) const {
    return this->mName;
}

void    Character::equip(AMateria *m) {
    this->mInventory[this->mIndexInventory % 4] = m;
}

void    Character::unequip(int idx) {
    if (idx < 4)
        this->mInventory[idx] = NULL;
    else
        std::cout << "check index range" << std::endl;
}

void    Character::use(int idx, ICharacter &target) {

}