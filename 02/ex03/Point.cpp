#include "Point.hpp"

Point::Point(void) :x(0), y(0) {
    std::cout << "Point class called" << std::endl;
}

Point::Point(const float x, const float y) :x(x) , y(y) {

}

Point::Point(const Point &input) : x(input.x), y(input.y) {

}

Point &Point::operator=(Point &input) {
    if (this != &input)
    {
        const_cast<Fixed&>(this->x) = input.x;
        const_cast<Fixed&>(this->y) = input.y;
    }
    return (*this);
}

float Point::getX(void){
    return this->x.toFloat();
}

float Point::getY(void){
    return this->y.toFloat();
}
