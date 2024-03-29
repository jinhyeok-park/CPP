#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    try {
        // Bureaucrat tester("tester1", -1); // Bureacrate over eerror;
        // Bureaucrat tester3("tester1", 200);
        
        // Bureaucrat tester3("tester1", 20);
        // Bureaucrat tester(tester3); // cpy assing construct;

        // Bureaucrat tester3("tester1", 20);
        // tester3.GradeDecreament();
        // tester3.GradeIncrement(); // brucrate function


        // Bureaucrat tester3("tester1", 150);
        // tester3.GradeDecreament(); // brucrate function error

        // AForm file1("file1", false, 10 , 10);
        // Bureaucrat  tester1("tester1", 1);
        // file1.BeSigned(tester1);

        // AForm file2("file1", false, 1, 1);
        // std::cout << file2 << std::endl;
        // Bureaucrat  tester2("tester2", 150);
        // file2.BeSigned(tester2);

        // AForm file2("file1", false, 123, 123);
        // Bureaucrat  tester2("tester2", 20);
        // tester2.SignAForm(file2);
        Bureaucrat tester("tester1", 25);
        // ShrubberyCreationForm test("treee");
        // test.BeSigned(tester);
        // test.execute(tester);

        RobotomyRequestForm test2;
        test2.BeSigned(tester);
        test2.execute(tester);

        // ShrubberyCreationForm test3;
        // test3.BeSigned(tester);
        // test3.execute(tester);
        // tester.ExecuteForm(test2);
        
        PresidentialPardonForm test("ta");
        test.BeSigned(tester);
        test.execute(tester);
    }
    catch (AForm::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (AForm::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
}