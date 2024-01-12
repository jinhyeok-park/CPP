#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("defualt",false,72,45){ 
    m_Target = "default";
    std::cout << "robotomy defualt constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy",false,72,45){ 
    m_Target = target;
    std::cout << "robotomy defualt constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) { 
    std::cout << "robotomy destroy" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) {
    std::cout << "robotomy assign constructor" << std::endl;
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other) {
    if (this != &other)
        return (*this);
    m_Target = other.m_Target;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
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

void        RobotomyRequestForm::Working(void) const {

    srand(time(0));
	std::cout << "...Drilling noises..." << std::endl;
	if (rand() % 2 == 0)
		std::cout << m_Target << " has been robotomized successfully." << std::endl;
    else
        std::cout << m_Target << " has failed to be robotomized." << std::endl;
}
