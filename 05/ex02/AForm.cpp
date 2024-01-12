#include "AForm.hpp"

AForm::AForm(void) : m_Name("default"), m_IsSignedIn(false), m_SignRequiredGrade(1), m_ExecuteRequiredGrade(1) {
    std::cout << "AForm defualt Constructor" << std::endl;
}

AForm::~AForm(void) {
    std::cout<< this->m_Name << " destroy" << std::endl;
}

AForm::AForm(std::string m_Name, bool m_IsSignedIn, int m_SignRequiredGrade, int m_ExecuteRequiredGrade) \
: m_Name(m_Name), m_IsSignedIn(m_IsSignedIn), m_SignRequiredGrade(m_SignRequiredGrade), m_ExecuteRequiredGrade(m_ExecuteRequiredGrade)
{
    this->m_IsSignedIn = m_IsSignedIn;
    BoundValue(this->m_SignRequiredGrade);
    BoundValue(this->m_ExecuteRequiredGrade);
    std::cout << m_Name << " AForm Constructor" << std::endl;
}

AForm &AForm::operator=(const AForm &in)
{
    if (this == &in)
        return *this;
    std::cout << "value are all const,  cant change" << std::endl;
    return *this;
}

void    AForm::BoundValue(int grade) {
    if (grade < 1)
    {
        throw AForm::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw AForm::GradeTooLowException();
    }
}

void    AForm::BeSigned(Bureaucrat &in)
{
    try {
        if (this->m_SignRequiredGrade >= in.GetGrade())
        {
            this->m_IsSignedIn = true; 
            std::cout << in.GetName() << " signed " << m_Name <<std::endl;
        }
        else 
        {
            std::cout << in.GetName() << " couldn`t sign " << m_Name << " because ";
            throw AForm::GradeTooLowException();
        }
    }
    catch (GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
}

const char *AForm::GradeTooHighException::what(void) const throw()
{
    return "grade is too high";
}

const char *AForm::GradeTooLowException::what(void) const throw() 
{
    return "grade is too low";
}

const char *AForm::NotSignedException::what(void) const throw() 
{
    return "not signed check the status";
}

std::string AForm::GetName(void) const {
    return this->m_Name;
}

int AForm::GetIsSignedIn(void) const {
    return m_IsSignedIn;
}

int AForm::GetSignRequiredGrade(void) const {
    return m_SignRequiredGrade;
}

int AForm::GetExecuteRequiredGrade(void) const {
    return m_ExecuteRequiredGrade;
}

std::ostream& operator<<(std::ostream &out, const AForm &f)
{
    out << f.GetName() << " " << f.GetIsSignedIn() << " " << \
    f.GetSignRequiredGrade() << " " << f.GetExecuteRequiredGrade(); 
    return out;
}

bool    AForm::CheckSignAuthority(AForm const &f, Bureaucrat const &b) const {
    if (f.GetSignRequiredGrade() < b.GetGrade())
    {
        std::cout << "check sign authority level" << std::endl;
        return false;
    }
    if (f.GetIsSignedIn())
        return true;
    return false;
}

bool    AForm::CheckExecAuthority(AForm const &f, Bureaucrat const &b) const {
    if (f.GetExecuteRequiredGrade() < b.GetGrade())
    {
        std::cout << "check sign authority level" << std::endl;
        return false;
    }
    return true;
}