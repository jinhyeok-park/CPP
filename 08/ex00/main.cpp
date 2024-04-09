#include "easyfind.h"

#include <list>
#include <vector>
#include <deque>
#include <array>

#include <set>
#include <map>

int main(void)
{
    std::vector<int> container1;

    try 
    {
        std::vector<int>::iterator ret1 = easyfind(container1, 3);
        (void)ret1;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}