#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat test;
    Bureaucrat test2("me", 159);
    Bureaucrat test4(test2);
    std::cout<< "my Name is " << test4.GetName() << std::endl;
    std::cout<< "my grade is " << test4.GetGrade() << std::endl;
    test = test2;
    std::cout<< "my grade is " << test.GetGrade() << std::endl;
    test.GradeIncrement();
    test.GradeIncrement();
    std::cout<< "my grade is " << test.GetGrade() << std::endl;
    test.GradeDecreament();
    test.GradeDecreament();
    test.GradeDecreament();
    std::cout<< "my grade is " << test.GetGrade() << std::endl;
}