#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>

template<typename T>
typename T::iterator easyfind(T &a, int b)
{
    typename T::iterator ret;

    ret = std::find(a.begin(), a.end(), b);
    if (ret == std::end(a))
    {
        throw std::runtime_error("value not found");
    }
    return ret;
}

#endif