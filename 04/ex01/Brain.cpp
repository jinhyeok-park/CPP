#include "Brain.hpp"

Brain::Brain(void) : mIdeas{"noidea..", } {
    std::cout << "Brain defualt constructor" << std::endl;
}

Brain::~Brain(void) {
    std::cout << "Brain destroy" << std::endl;
}

Brain::Brain(const Brain &other) {
    std::cout << "Brain cpy constructor" << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "Brain operator" << std::endl;
    if (this != &other)
    {
        for (int i = 0 ; i < 100 ; i++)
            this->mIdeas[i] = other.mIdeas[i];
    }
    return *this;
}