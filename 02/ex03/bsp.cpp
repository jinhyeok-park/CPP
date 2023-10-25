#include "Point.hpp"

float   getTriangleSize(Point P, Point Point1, Point Point2)
{
    float area;

    Point Vector1(Point1.getX() - P.getX(), Point1.getY() - P.getY());
    Point Vector2(Point2.getX() - P.getX(), Point2.getY() - P.getY());
    area = 0.5 * (Vector1.getX() * Vector2.getY() - Vector1.getY() * Vector2.getX()); 
    return area;
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
    float check[3] = {0 , };

    check[0] = getTriangleSize(point, a, b);
    check[1] = getTriangleSize(point, b, c);
    check[2] = getTriangleSize(point, c, a);
    if (check[0] < 0 && check[1] < 0 && check [2] < 0)
    {
        std::cout << "in here" << std::endl;
        return true;
    }
    else if (check[0] > 0 && check[1] > 0 && check[2] > 0)
        return true;
    return false;
} 