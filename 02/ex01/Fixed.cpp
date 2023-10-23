#include "Fixed.hpp"

const int    Fixed::mFractionalBitNum = 8;

Fixed::Fixed(void) : mFixedPointNum(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int input) : mFixedPointNum(std::roundf(input << this->mFractionalBitNum)) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float input) : mFixedPointNum(std::roundf(input * (1 << this->mFractionalBitNum))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj) {
    std::cout << "Copy constructor called" << std::endl;
    this->mFixedPointNum = obj.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this-> mFixedPointNum = obj.getRawBits();
    return *this;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(this->mFixedPointNum) / (1 << this->mFractionalBitNum);
}

std::ostream& operator<<(std::ostream &out, const Fixed &other) {
    out << other.toFloat();
    return out;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits (void) const {

    std::cout << "getRawBits member function called" << std::endl;
    return this->mFixedPointNum;
}

int Fixed::toInt(void) const {
    int ret;
    ret = this->toFloat();
    return ret;
}