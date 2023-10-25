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

Fixed& Fixed::operator=(const Fixed &obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this-> mFixedPointNum = obj.getRawBits();
    return *this;
}

bool Fixed::operator>(const Fixed &obj) {
    std::cout << "compare operator called" << std::endl;
    return (this->mFixedPointNum > obj.mFixedPointNum);
}

bool Fixed::operator<(const Fixed &obj) {
    std::cout << "compare operator called" << std::endl;
    return (this->mFixedPointNum < obj.mFixedPointNum);
}

bool Fixed::operator>=(const Fixed &obj) {
    std::cout << "compare operator called" << std::endl;
    return (this->mFixedPointNum >= obj.mFixedPointNum);
}

bool Fixed::operator<=(const Fixed &obj) {
    std::cout << "compare operator called" << std::endl;
    return (this->mFixedPointNum <= obj.mFixedPointNum);
}

bool Fixed::operator!=(const Fixed &obj) {
    std::cout << "compare operator called" << std::endl;
    return (this->mFixedPointNum != obj.mFixedPointNum);
}

bool Fixed::operator==(const Fixed &obj) {
    std::cout << "compare operator called" << std::endl;
    return (this->mFixedPointNum == obj.mFixedPointNum);
}

Fixed Fixed::operator+(const Fixed &num) const {
    std::cout << "arithmatic operator called" << std::endl;
    Fixed ret(this->toFloat() + num.toFloat());
    return ret;
}

Fixed Fixed::operator-(const Fixed &num) const {
    std::cout << "arithmatic operator called" << std::endl;
    Fixed ret(this->toFloat() - num.toFloat());
    return ret;
}

Fixed Fixed::operator*(const Fixed &num) const {
    std::cout << "arithmatic operator called" << std::endl;
    Fixed ret(this->toFloat() * num.toFloat());
    return ret;
}

Fixed Fixed::operator/(const Fixed &num) const { // if num divied 0 ;
    if (num.toFloat() == 0)
    {
        std::cout << "0 occur check the num again" << std::endl;
        exit(1);
    }
    std::cout << "arithmatic operator called" << std::endl;
    Fixed ret(this->toFloat() / num.toFloat());
    return ret;
}

Fixed &Fixed::operator++(void) { 
    this->mFixedPointNum++;
    return *this;
}

Fixed Fixed::operator++(int) { 
    Fixed temp(this->toFloat());
    this->mFixedPointNum++;
    return temp;
}

Fixed &Fixed::operator--(void) { 
    this->mFixedPointNum--;
    return *this;
}

Fixed Fixed::operator--(int) { 
    Fixed temp(this->toFloat());
    this->mFixedPointNum--;
    return temp;
}


Fixed &Fixed::min(Fixed &a, Fixed &b) {
    if (a.mFixedPointNum > b.mFixedPointNum)
        return b;
    else
        return a;
}

const Fixed &Fixed::min( Fixed const &a, Fixed const &b) {
    if (a.mFixedPointNum > b.mFixedPointNum)
        return b;
    else
        return a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a.mFixedPointNum > b.mFixedPointNum)
        return a;
    else
        return b;
}

const Fixed &Fixed::max( Fixed const &a, Fixed const &b) {
    if (a.mFixedPointNum > b.mFixedPointNum)
        return a;
    else
        return b;
}
