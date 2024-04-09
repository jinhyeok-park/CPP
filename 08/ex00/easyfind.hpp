#ifndef EASYFIND_HPP
# define EASYFIND_HPP


#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>


class ValueNotFoundException : public std::exception
{
    const char * what() const throw ()
    {
        return "not found value";
    }

};

template <typename T>
typename T::iterator easyfind(T& container, int target)
{
    typename T::iterator iter;
    iter = std::find(container.begin(), container.end(), target);
    if (iter == container.end())
    {
        throw ValueNotFoundException();
    }
    return iter;
}

#endif