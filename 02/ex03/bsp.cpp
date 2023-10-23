#include "Point.hpp"

float   getTriangleSize(Point P, Point Point1, Point Point2)
{
    float area;

    Point Vector1(Point1.getX() - P.getX(), Point1.getY() - P.getY());
    Point Vector2(Point2.getX() - P.getX(), Point2.getY() - P.getY());
    area = 0.5 * (Vector1.getX() * Vector2.getY() - Vector1.getY() * Vector2.getX()); 
    return area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
    float check;

    check = getTriangleSize(point, a, b);
    if (check <= 0)
        return false;
    check = getTriangleSize(point, b, c);
    if (check <= 0)
        return false;
    check = getTriangleSize(point, c, a);
    if (check <= 0)
        return false;
    return true;
} 