#ifndef SHRUBBERYCReATIONFORM_HPP
#define SHRUBBERYCReATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

private :
    std::string m_target;

public :
    ShrubberyCreationForm(void);
    virtual ~ShrubberyCreationForm(void);
    ShrubberyCreationForm(ShrubberyCreationForm const &other);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

    //function
    virtual void execute(Bureaucrat const & executor) const;
};

#endif