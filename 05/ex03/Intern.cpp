#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {
    m_Forms[0] = "PresidentialPardon";
    m_Forms[1] = "RobotomyRequest";
    m_Forms[2] = "ShrubberyCreation";
    m_functions[0] = &Intern::PresidentialPardon;
    m_functions[1] = &Intern::RobotomhyRequest;
    m_functions[2] = &Intern::ShrubberyCreation;
    std::cout << "Intern default constructor" << std::endl;
}

Intern::Intern(Intern &other){
    std::cout << "assign constructor" << std::endl;
    *this = other;
}

Intern &Intern::operator=(Intern &other) {
    if (this != &other)
        return (*this);
    return *this;
}

Intern::~Intern(void) {
    std::cout << "Intern destroy" << std::endl;
}

AForm *Intern::makeForm(std::string form, std::string target) {
    for (int i = 0 ; i < 3 ; i ++)
    {
        if (m_Forms[i] == form)
        {
            return (this->*m_functions[i])(target);
        }
    }
        std::cout << "makeform Fail, return NULL" << std::endl;
        throw std::exception();
    return NULL;
}

AForm   *Intern::PresidentialPardon(std::string target) {
    return new PresidentialPardonForm(target);
}
AForm   *Intern::RobotomhyRequest(std::string target) {
    return new RobotomyRequestForm(target);
}
AForm   *Intern::ShrubberyCreation(std::string target) {
    return new ShrubberyCreationForm(target);
}
