#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
    //const Animal test;
    Animal *test2 = new Cat();
    Animal *test3 = new Dog();

    test2->makeSound();
    test3->makeSound();

    delete(test2);
    delete(test3);
    return 0;
}