#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : m_Name("default") , m_Grade(150) {
    std::cout << "default constructor" << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << this->m_Name <<" destory" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : m_Name(other.m_Name) {
    std::cout << "copy constructor" << std::endl;
    BoundValue(other.m_Grade);
    this->m_Grade = other.m_Grade;
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this  == &other)
        return (*this);
    BoundValue(other.m_Grade);
    std::cout << "Name is const value can`t change it!" << std::endl;
    return *this;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_Name(name), m_Grade(grade) {
    BoundValue(grade);
    std::cout << m_Name << " Bureaucrat constructor" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
    return "lank is too high, change the lank";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
    return "lank is too low, chang the lank";
}

void Bureaucrat::BoundValue(int grade)
{
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
}

int     Bureaucrat::GetGrade(void)
{
    return this->m_Grade;
}

std::string     Bureaucrat::GetName(void)
{
    return this->m_Name;
}

void    Bureaucrat::GradeDecreament(void)
{
    this->m_Grade += 1;
    std::cout << "down grade " << this->m_Grade << std::endl;
    BoundValue(this->m_Grade);
}

void    Bureaucrat::GradeIncrement(void)
{
    this->m_Grade -= 1;
    std::cout << "up grade " << this->m_Grade << std::endl;
    BoundValue(this->m_Grade);
}

void    Bureaucrat::SignForm(Form &f)
{
    f.BeSigned(*this);
}