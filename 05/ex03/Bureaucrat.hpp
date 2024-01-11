
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
class AForm;

class Bureaucrat {

private :
    const std::string          m_Name;
    int                        m_Grade;

protected :
    void BoundValue(int grade);

public :
    Bureaucrat(void);
    ~Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    void        GradeIncrement(void);
    void        GradeDecreament(void);
    int         GetGrade(void) const;
    std::string GetName(void);

    void    SignAForm(AForm &f);
    void    ExecuteForm(AForm const & form);
    class GradeTooHighException : public std::exception{

        public :
            const char *what() const throw();
    };

    class   GradeTooLowException  : public std::exception{

        public :
            const char *what() const throw();
    };
};

#endif