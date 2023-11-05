#ifndef BRAIN_HPP 
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {

private :
    std::string mIdeas[100];
public :
    Brain(void);
    ~Brain(void);
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
};

#endif