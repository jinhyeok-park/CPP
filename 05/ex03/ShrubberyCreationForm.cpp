#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("default", false, 145, 137){
    m_Target = "default";
    std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubberry", false, 145, 137){
    m_Target = target;
    std::cout << "ShrubberyCreationForm constructor" << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    std::cout << "ShrubberyCreationForm destroy" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) {
    std::cout << "assign constructor" << std::endl;
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    if (this == &other)
        return *this;
    m_Target = other.m_Target;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    try {
        if (CheckSignAuthority(*this, executor))
        {
            if (CheckExecAuthority(*this, executor))
            {
                Working();
                return ;
            }
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

void        ShrubberyCreationForm::Working(void) const {
    std::string     extension = "_shrubbery";
    std::string     fullName = m_Target + extension;
    std::ofstream   outFile(fullName.c_str());
    if (!outFile.is_open())
    {
        std::cout << "file open error" << std::endl;
        return ;
    }
    outFile << "            *            " << std::endl;
    outFile << "           / \\           " << std::endl;
    outFile << "          / * \\          " << std::endl;
    outFile << "         / *** \\         " << std::endl;
    outFile << "        / ***** \\        " << std::endl;
    outFile << "       / ******* \\       " << std::endl;
    outFile << "      / ********* \\      " << std::endl;
    outFile << "     / *********** \\     " << std::endl;
    outFile << "    / ************* \\    " << std::endl;
    outFile << "   / *************** \\   " << std::endl;
    outFile << "  / ***************** \\  " << std::endl;
    outFile << " / ******************* \\ " << std::endl;
    outFile << "/ ********************* \\" << std::endl;
    outFile.close();
    std::cout << "shrubbery working done" << std::endl;
}