#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {
    private :
        std::string m_Forms[3];
        AForm *(Intern::*m_functions[3])(std::string target);

    public :
        Intern(void);
        ~Intern(void);
        AForm   *makeForm(std::string form, std::string target);
        AForm   *PresidentialPardon(std::string target);
        AForm   *RobotomhyRequest(std::string target);
        AForm   *ShrubberyCreation(std::string target);
};

#endif