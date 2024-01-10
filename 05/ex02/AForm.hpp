#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Form {

private :
    const std::string   m_Name;
    bool                m_IsSignedIn;
    const   int         m_SignRequiredGrade;
    const   int         m_ExecuteRequiredGrade;
 
public :
    Form(void);
    ~Form(void);
    Form(std::string m_Name, bool m_statusSigned, int m_SignRequiredGrade, int m_ExecuteRequiredGrade);
    Form &operator=(const Form &in);
    void BoundValue(int grade);
    void BeSigned(Bureaucrat &in);
    std::string    GetName(void) const;
    int            GetIsSignedIn(void) const;
    int            GetSignRequiredGrade(void) const;
    int            GetExecuteRequiredGrade(void) const;

    class GradeTooHighException : public std::exception{
        public :
            const char *what() const throw();
    };

    class   GradeTooLowException  : public std::exception{
        public :
            const char *what() const throw();
    };
};

std::ostream& operator<<(std::ostream &out, const Form &f);

#endif