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
    Point &operator=(Point &input);

    float getX(void);
    float getY(void);
};

float   getTriangleSize(Point P, Point Point1, Point Point2);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif