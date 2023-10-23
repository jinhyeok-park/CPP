#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

private :
    int                 mFixedPointNum;
    static const int    mFractionalBitNum;

public :
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &obj);
    Fixed& operator=(const Fixed &obj);
    int getRawBits(void) const;
};


#endif