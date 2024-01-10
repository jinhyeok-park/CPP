#include "Form.hpp"

Form::Form(void) : m_Name("default"), m_IsSignedIn(false), m_SignRequiredGrade(1), m_ExecuteRequiredGrade(1) {
    std::cout << "Form defualt Constructor" << std::endl;
}

Form::~Form(void) {
    std::cout<< this->m_Name << " destroy" << std::endl;
}

Form::Form(std::string m_Name, bool m_IsSignedIn, int m_SignRequiredGrade, int m_ExecuteRequiredGrade) \
: m_Name(m_Name), m_IsSignedIn(m_IsSignedIn), m_SignRequiredGrade(m_SignRequiredGrade), m_ExecuteRequiredGrade(m_ExecuteRequiredGrade)
{
    this->m_IsSignedIn = m_IsSignedIn;
    BoundValue(this->m_SignRequiredGrade);
    BoundValue(this->m_ExecuteRequiredGrade);
    std::cout << m_Name << " Form Constructor" << std::endl;
}

Form &Form::operator=(const Form &in)
{
    if (this == &in)
        return *this;
    std::cout << "value are all const,  cant change" << std::endl;
    return *this;
}

void    Form::BoundValue(int grade) {
    if (grade < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Form::GradeTooLowException();
    }
}

void    Form::BeSigned(Bureaucrat &in)
{
    if (this->m_IsSignedIn == true)
        std::cout << m_Name << "this is aleady singed" << std::endl;
    else if (this->m_SignRequiredGrade > in.GetGrade())
    {
        this->m_IsSignedIn = true; 
        std::cout << in.GetName() << " signed " << m_Name <<std::endl;
    }
    else 
    {
        std::cout << in.GetName() << " couldn`t sign " << m_Name << " because permission level denied"<<std::endl;
        throw Form::GradeTooLowException();
    }
}

const char *Form::GradeTooHighException::what(void) const throw()
{
    return "grade is too high";
}
const char *Form::GradeTooLowException::what(void) const throw() 
{
    return "grade is too low";
}

std::string Form::GetName(void) const {
    return this->m_Name;
}

int Form::GetIsSignedIn(void) const {
    return m_IsSignedIn;
}

int Form::GetSignRequiredGrade(void) const {
    return m_SignRequiredGrade;
}

int Form::GetExecuteRequiredGrade(void) const {
    return m_ExecuteRequiredGrade;
}

std::ostream& operator<<(std::ostream &out, const Form &f)
{
    out << f.GetName() << " " << f.GetIsSignedIn() << " " << \
    f.GetSignRequiredGrade() << " " << f.GetExecuteRequiredGrade(); 
    return out;
}