#ifndef SHRUBBERYCReATIONFORM_HPP
#define SHRUBBERYCReATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

private :
    std::string m_Target;

public :
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string target);
    virtual ~ShrubberyCreationForm(void);
    ShrubberyCreationForm(ShrubberyCreationForm const &other);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

    //function
    virtual void execute(Bureaucrat const & executor) const;
    void        Working(void) const ;
};

#endif