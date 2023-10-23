#include "Fixed.hpp"

const int    Fixed::mFractionalBitNum = 8;

Fixed::Fixed(void) : mFixedPointNum(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj) {
    std::cout << "Copy constructor called" << std::endl;
    this->mFixedPointNum = obj.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    this-> mFixedPointNum = obj.getRawBits();
    return *this;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits (void) const {

    std::cout << "getRawBits member function called" << std::endl;
    return this->mFixedPointNum;
}
