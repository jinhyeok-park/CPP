#ifndef AForm_HPP
#define AForm_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class AForm {

private :
    const std::string   m_Name;
    bool                m_IsSignedIn;
    const   int         m_SignRequiredGrade;
    const   int         m_ExecuteRequiredGrade;
 
public :
    //ocf
    AForm(void);
    virtual ~AForm(void);
    AForm(std::string m_Name, bool m_statusSigned, int m_SignRequiredGrade, int m_ExecuteRequiredGrade);
    AForm &operator=(const AForm &in);

    //myfunction
    void BoundValue(int grade);
    //function 
    void BeSigned(Bureaucrat &in);
    void execute(Bureaucrat const & executor) const;
    //getter
    std::string    GetName(void) const;
    int            GetIsSignedIn(void) const;
    int            GetSignRequiredGrade(void) const;
    int            GetExecuteRequiredGrade(void) const;

    //exception 
    class GradeTooHighException : public std::exception{
        public :
            const char *what() const throw();
    };

    class   GradeTooLowException  : public std::exception{
        public :
            const char *what() const throw();
    };
};

std::ostream& operator<<(std::ostream &out, const AForm &f);

#endif