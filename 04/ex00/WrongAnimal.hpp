#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

private :
    std::string type;

public :
    WrongAnimal(void);
    ~WrongAnimal(void);
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal& operator=(const WrongAnimal &other);

    void makeSound(void) const;
    std::string getType(void) const;
    void setType(std::string input);
};

#endif