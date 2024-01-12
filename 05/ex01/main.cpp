#include "Form.hpp"

int main(void)
{
    try {
        // Bureaucrat tester("tester1", -1); // Bureacrate over eerror;
        // Bureaucrat tester3("tester1", 200);
        
        // Bureaucrat tester3("tester1", 20);
        // Bureaucrat tester(tester3); // cpy assing construct;

        Bureaucrat tester3("tester1", 1);
        tester3.GradeDecreament();
        tester3.GradeIncrement(); // brucrate function
        //tester3.GradeIncrement(); // brucrate function
        
        Form test("qwe", true, -120, -20);
        // test.BeSigned(tester3);
        std::cout << test.GetIsSignedIn() << std::endl;
        std::cout << test << std::endl;


        // Bureaucrat tester3("tester1", 150);
        // tester3.GradeDecreament(); // brucrate function error

        // Form file1("file1", false, 10 , 10);
        // Bureaucrat  tester1("tester1", 1);
        // file1.BeSigned(tester1);

        // Form file2("file1", false, 1, 1);
        // std::cout << file2 << std::endl;
        // Bureaucrat  tester2("tester2", 150);
        // file2.BeSigned(tester2);

        // Form file2("file1", false, -12233, 23123);
        // Bureaucrat  tester2("tester2", 12120);
        // tester2.SignForm(file2);
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooHighException &e)
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