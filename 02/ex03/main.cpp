#include "Point.hpp"

int main( void ) {
    Point a(0,0);
    Point b(10,0);
    Point c(5,4);
    Point p(2,1.7);
    std::cout << bsp(a, b, c, p) << std::endl;
    return 0;
}
