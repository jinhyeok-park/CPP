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

    void BoundValue(int grade);
 
public :
    //ocf
    AForm(void);
    virtual ~AForm(void);
    AForm(std::string m_Name, bool m_statusSigned, int m_SignRequiredGrade, int m_ExecuteRequiredGrade);
    AForm &operator=(const AForm &in);

    //myfunction
    // void BoundValue(int grade);
    //function 
    void BeSigned(Bureaucrat &in);
    //getter
    std::string    GetName(void) const;
    int            GetIsSignedIn(void) const;
    int            GetSignRequiredGrade(void) const;
    int            GetExecuteRequiredGrade(void) const;

    virtual void execute(Bureaucrat const & executor) const = 0;
    virtual void Working(void) const = 0;
    //bool    CheckAuthority(AForm &f, Bureaucrat &b);
    //bool    CheckSignAuthority(AForm const &f, Bureaucrat const &b) const;
    bool    CheckSignAuthority(AForm const &f, Bureaucrat const &b) const;
    bool    CheckExecAuthority(AForm const &f, Bureaucrat const &b) const;
    //exception 
    class GradeTooHighException : public std::exception{
        public :
            const char *what() const throw();
    };

    class   GradeTooLowException  : public std::exception{
        public :
            const char *what() const throw();
    };

    class   NotSignedException  : public std::exception{
        public :
            const char *what() const throw();
    };
};

std::ostream& operator<<(std::ostream &out, const AForm &f);

#endif