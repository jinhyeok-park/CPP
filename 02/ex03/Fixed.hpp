#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed {

private :
    int                 mFixedPointNum;
    static const int    mFractionalBitNum;

public :
    Fixed(void);
    ~Fixed(void);

    Fixed(const int input);
    Fixed(const float input);
    Fixed(const Fixed &obj);
    int toInt(void) const;
    float toFloat(void) const;
    int getRawBits(void) const;
    
    static Fixed &min(Fixed &a, Fixed &b) ;
    static const Fixed &min( Fixed const &a, Fixed const &b) ;
    static Fixed &max(Fixed &a, Fixed &b) ;
    static const Fixed &max( Fixed const &a, Fixed const &b) ;

    Fixed& operator=(const Fixed &obj);
    bool operator>(const Fixed &obj);
    bool operator<(const Fixed &obj);
    bool operator>=(const Fixed &obj);
    bool operator<=(const Fixed &obj);
    bool operator!=(const Fixed &obj);
    bool operator==(const Fixed &obj);

    Fixed &operator++(void);
    Fixed operator++(int);
    Fixed &operator--(void);
    Fixed operator--(int);
};

std::ostream& operator<<(std::ostream &out, const Fixed &other);
Fixed operator+(const Fixed &num1, const Fixed &num2);
Fixed operator-(const Fixed &num1, const Fixed &num2);
Fixed operator*(const Fixed &num1, const Fixed &num2);
Fixed operator/(const Fixed &num1, const Fixed &num2);

#endif