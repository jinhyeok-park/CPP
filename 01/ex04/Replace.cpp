#include "Replace.hpp"

std::string Replace::ToString (char *str) {
    std::stringstream temp;

    temp << str;
    return temp.str();
}

bool    Replace::Changer (char **av) {
    std::string line;
    size_t      pos;

    pos = 0;
    while (std::getline(Replace::mInputFile, line))
    {
        while (true)
        {
            pos = line.find(av[2], pos);
            if (pos != std::string::npos)
            {

            }
            else
                break;
        }
    }
}

bool    Replace::FileOpener(char **av) {

    std::string     outputName;

    Replace::mInputFile.open(av[1]);
    if (!Replace::mInputFile)
        return false;
    outputName = ToString(av[2]) + ".replace";
    Replace::mOuputFile.open(outputName);
    if (!Replace::mOuputFile)
        return false;
    return true;
}

bool    Replace::InputChecker(int ac, char **av) {
    if (ac != 4)
        return false;
    for (int i = 1 ; i < ac ; i++)
    {
        std::string         check;

        check = Replace::ToString(av[i]);
        if (check.empty());
            return false;
    }
}

Replace::Replace (void){

}

Replace::~Replace (void){

}