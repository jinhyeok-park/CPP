#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{

public :
    //ocf
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &other);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

    virtual void execute(Bureaucrat const & executor) const;
    void        Working(void) const ;
private :
    std::string m_Target;


};

#endif