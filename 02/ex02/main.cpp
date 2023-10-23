#include "Fixed.hpp"

// int main( void ) {

// // Fixed a;
// // a = Fixed (123.545f);
// // Fixed c(20000);
// // bool i;
// // i = a > c ;
// // std::cout << (a > c) << std::endl;
// // std::cout << (a < c);
// // Fixed c(a + b);
// // Fixed d = a + b;
// // std::cout << c.toFloat() << std::endl;
// // std::cout << d.toFloat();
// Fixed const b( Fixed( 5.05f ) / Fixed( 0.000f ) );
// Fixed a(-0.0f);
// std::cout << a.toFloat();
// // float test = -0.0;
// // std::cout << test;
// // std::cout << b.toFloat();
// // float test1 = 5.05;
// // float test2 = 0;
// // float test = test1 / test2;
// // std::cout << test << "this is test" << std::endl;

// // std::cout << a << std::endl;
// // std::cout << ++a << std::endl;
// // std::cout << a << std::endl;
// // std::cout << a << std::endl;
// // std::cout << b << std::endl;
// // std::cout << Fixed::max( a, b ) << std::endl;

// return 0;
// }

int main( void ) {

Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, static_cast<Fixed>(b)) << std::endl;
return 0;
}
