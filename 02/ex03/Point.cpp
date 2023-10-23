#include "Point.hpp"

Point::Point(void) :x(0), y(0) {
    std::cout << "Point class called" << std::endl;
}

Point::Point(const float x, const float y) :x(x) , y(y) {

}

Point::Point(const Point &input) : x(input.x), y(input.y) {

}