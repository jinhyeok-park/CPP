#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#define MAX_INVENTORY 4
#define MAX_TRASHCAN 30

class Character : public ICharacter {

private :
    AMateria *mInventory[MAX_INVENTORY];
    AMateria **mTrashCan;
    std::string mName;
    int mTrashCanIndex;
    int mIndexInventory;
    int mTrashSizeUp;
public :
    Character(void);
    Character(std::string name);
    ~Character(void);
    Character(const Character & other);
    Character &operator=(const Character & other);

    std::string const & getName(void) const;
    void    equip(AMateria *m);
    void    unequip(int idx);
    void    use(int idx, ICharacter &target);
};

#endif