#include "Replace.hpp"

int main(int ac, char **av)
{
    Replace replaceTool;

    if (!replaceTool.InputChecker(ac, av))
    {
        std::cerr << "input value error check it again" << std::endl;
        return 1;
    }
    else if(!replaceTool.FileOpener(av))
    {
        std::cerr << "file error check it again" << std:: endl;
        return 1;
    }
    replaceTool.Changer(av);
}