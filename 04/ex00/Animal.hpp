#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

private :
    std::string type;

public :
    Animal(void);
    virtual ~Animal(void);
    Animal(std::string type);
    Animal(const Animal &other);
    Animal& operator=(const Animal &other);

    virtual void makeSound(void);
    std::string getType(void);
    void setType(std::string input);
};

#endif