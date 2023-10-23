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

    Fixed& operator=(const Fixed &obj);
};

std::ostream& operator<<(std::ostream &out, const Fixed &other);

#endif