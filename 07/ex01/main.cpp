#include "iter.hpp"

int main(void)
{
    std::string arr[5];
    int         arr1[5];

    arr[0] = "test number 1";
    arr[1] = "test number 2";
    arr[2] = "test number 3";
    arr[3] = "test number 4";
    arr[4] = "test number 5";
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;
    arr1[3] = 4;
    arr1[4] = 5;

    iter(arr, 5, &PrintFunction);
    iter(arr1, 5, &Multi2Function);

    AddFunction(1, 1.0);
    AddFunction(0.1, 0.1);
}