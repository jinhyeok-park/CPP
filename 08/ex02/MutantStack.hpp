#include <iostream>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
    public :
        MutantStack();
        ~MutantStack();
    private :
};

template<typename T>
MutantStack<T>::MutantStack() 
{
    std::cout << "constructor call" << std::endl;
};

template<typename T>
MutantStack<T>::~MutantStack()
{
    std::cout << "destroy called" << std::endl;

}