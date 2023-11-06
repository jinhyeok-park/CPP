#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
private :
    Brain *mBrain;
public :
    Dog(void);
    ~Dog(void);
    Dog(std::string type);
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);

    void    makeSound(void) const ;
    Brain &getBrain(void);
};

#endif