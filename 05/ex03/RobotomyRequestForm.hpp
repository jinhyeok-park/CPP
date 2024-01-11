#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm{

public :
    RobotomyRequestForm(void);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &other);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

    virtual void execute(Bureaucrat const & executor) const;
    void        Working(void) const ;
private :
    std::string m_Target;
};

#endif