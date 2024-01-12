#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("default", false, 25, 5) {
    m_Target = "default";
    std::cout <<"PresidentialPardonForm default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", false, 25, 5) {
    m_Target = target;
    std::cout <<"PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
    std::cout <<"PresidentialPardonForm destroy" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) {
    std::cout <<"assign constructor" << std::endl;
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other) {
    if (this == &other)
        return *this;
    m_Target = other.m_Target;
    return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const {
       try {
            if (CheckExecAuthority(*this, executor))
            {
                Working();
                return ;
            }
        if (!this->GetIsSignedIn())
            throw AForm::NotSignedException();
        throw AForm::GradeTooLowException();
    }
    catch (GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (NotSignedException &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void        PresidentialPardonForm::Working(void) const {
    std::cout << m_Target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}