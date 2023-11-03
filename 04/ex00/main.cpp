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

    // const Animal *a = new Cat("Cat");
    // const Animal *b = new Dog("Dog");
    // //std::cout << a->getType() << std::endl;
    // a->makeSound();
    // b->makeSound();
    // delete(a);
    // delete(b);

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout  << j->getType() << " " << std::endl;
    std::cout  << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;
}