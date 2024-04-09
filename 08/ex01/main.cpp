#include "Span.hpp"

int main()
{
Span sp = Span(5);
Span test = Span(sp);

Span test2 = sp;
std::cout << "test size is "<<  test.size() << std::endl;
std::cout << "test2 size is " <<test2.size() << std::endl;

sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);

// std::cout << sp.shortestSpan() << std::endl;
std::cout << "long span is " << sp.longestSpan() << std::endl;
return 0;
}