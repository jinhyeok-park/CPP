#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    j->makeSound();
    i->makeSound();
    Cat *test1 = new Cat();
    Cat *test2 = new Cat();

    std::cout << "the test1 thinking is ";
    std::cout << test1->getBrain().getIdeas(0) << std::endl;
    test1->getBrain().setIdeas(0, "i am a human ");

    std::cout << "the test1 thinking is ";
    std::cout << test1->getBrain().getIdeas(0) << std::endl;
    
    *test1 = *test2;
    std::cout << test1->getBrain().getIdeas(0) << std::endl;

    delete(test1);
    delete(test2);

    Dog dog1;
    Dog dog2;

    std::cout << "dog1 first thinking is ";
    std::cout << dog1.getBrain().getIdeas(0) << std::endl;

    std::cout << "dog1 thinking change" <<  std::endl;
    dog1.getBrain().setIdeas(0, "i am a human");

    std::cout << "dog1 << dog 2" << std::endl;
    dog2 = dog1;
    std::cout << "dog2 first thinking is " ;
    std::cout << dog2.getBrain().getIdeas(0) << std::endl;

    Animal *array[10];
    for (int i = 0 ; i < 5 ; i ++)
        array[i] = new Cat();
    for (int i = 5 ; i < 10 ; i++)
        array[i] = new Dog();

    for (int i = 0; i < 10 ; i ++)
    {
        delete(array[i]);
    }
    delete i;
    delete j;
    return 0;
}