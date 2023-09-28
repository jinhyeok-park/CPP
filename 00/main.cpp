#include "Test.hpp"

int main(void)
{
    TestClass a;
    a.function();
    a.a = 1;
    std::cout << a.a << std::endl;
}