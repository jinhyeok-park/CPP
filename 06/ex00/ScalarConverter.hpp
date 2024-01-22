#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <cctype>
#include <cmath>

class ScalarConverter {
    private :
    public :
    ScalarConverter(void);
    ~ScalarConverter(void);
    ScalarConverter(ScalarConverter const &other);
    ScalarConverter &operator=(ScalarConverter const &other);
    static void convert(const char *str);
};

#endif