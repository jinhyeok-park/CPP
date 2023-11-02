//#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    // Animal test;
    // Animal test2("waef");
    // Animal test3(test2);
    // test = test2;
    // test.getType();

    Animal *a = new Cat("Cat");
    Animal *b = new Dog("Dog");
    std::cout << a->getType() << std::endl;
    a->makeSound();
    b->makeSound();
    delete(a);
}