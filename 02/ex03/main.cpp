#include "Point.hpp"

int main( void ) {
    Point a(0,0);
    Point b(4,0);
    Point c(0,4);
    Point p(1,1);
    std::cout << bsp(a, b, c, p) << std::endl;
    return 0;
}
