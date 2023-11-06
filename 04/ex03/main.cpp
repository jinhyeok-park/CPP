#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main(void)
{
    AMateria *test = new Ice();
    Ice test1;
    Ice test2;
    test1 = test2;
    std::cout << "before gettype" ;
    std::cout << test1.getType() <<  std::endl;
    AMateria *test3;
    test3 = test1.clone();
    delete test3;
    delete test;
}