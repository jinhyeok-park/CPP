#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {
    std::cout << "ScalarConverter default constructor" << std::endl;
}

ScalarConverter::~ScalarConverter(void) {
    std::cout << "ScalarConverter destroy" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const & other)
{
    *this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    if (this != &other)
        return *this;
    return *this;
}

void ScalarConverter::convert(const char *str) {
    double d;
    std::stringstream ss;
    std::string str1 = str;
    if (str1.length() == 1 && !std::isdigit(str[0]))
    {
        d = static_cast<double>(str[0]);
    }
    else
    {
        try {
            d = std::stod(str1);
        }
        catch (std::exception &e)
        {
            std::cout << "convert error" << std::endl;
            std::exit(1);
        }
    }
    ss << "char: ";
    int i;
    i = static_cast<int>(d);
    if (std::isinf(d) || std::isnan(d))
    {
        ss << "impossible";
    }
    else if (i < 31 || i > 126)
    {
        ss << "Non printable";
    }
    else
    {
        ss << "'" << static_cast<char>(i) << "'";
    }
    ss << std::endl;
    ss << "int: ";
    if (std::isinf(d) || std::isnan(d))
    {
        ss << "impossible";
    }
    else if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
    {
        ss << "out of range";
    }
    else
    {
        ss << i;
    }
    ss << std::endl;
    ss << "float: ";
    float f;
    if (std::isinf(d) && d > 0)
    {
        ss << "+";
    }
    f = static_cast<float>(d);
    ss << f << "f";
    ss << std::endl;

    ss << "double: ";
    if (std::isinf(d) && d > 0)
    {
        ss << "+";
    }
    ss << (d) << std::endl;
    std::cout << ss.str();
}
