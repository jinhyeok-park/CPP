#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {

private :
    Fixed const x;
    Fixed const y;
public :
    Point(void);
    Point(const float x, const float y);
    Point(const Point &input);
    
    // Point operator=(const Point input);
};

#endif