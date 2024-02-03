#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void    iter(T* ArrayAddress, size_t Length, void (*FcnPtr)(T))
{
    for (size_t i = 0 ; i < Length ; i++)
    {
        FcnPtr(ArrayAddress[i]);
    }
}

template<typename T>
void    PrintFunction(T str)
{
    std::cout << str << std::endl;
}


template<typename T>
void    Multi2Function(T value)
{
    T temp;
    temp = value * 2;
    std::cout << temp << std::endl;
}

template<typename T1, typename T2>
void    AddFunction(T1 v1, T2 v2)
{
    std::cout << v1 + v2 << std::endl;
}

#endif