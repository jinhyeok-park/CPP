#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string str2 = "Hello";
    std::string *stringPTR;
    std::string &stringREF = str;
    stringPTR = &str;

    std::cout << "print address" << std::endl;
    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "print contents" << std::endl;
    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    stringPTR = &str2;
    stringREF = str2;
    std::cout << "\nprint address" << std::endl;
    std::cout << "str2 : " << &str2 << std::endl;
    std::cout << "stringPTR : " << stringPTR << std::endl;
    std::cout << "stringREF : " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "print contents" << std::endl;
    std::cout << "str : " << str << std::endl;
    std::cout << "stringPTR : " << *stringPTR << std::endl;
    std::cout << "stringREF : " << stringREF << std::endl;
}