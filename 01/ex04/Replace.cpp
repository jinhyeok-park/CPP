#include "Replace.hpp"

std::string Replace::ToString (char *str) {
    std::stringstream temp;

    temp << str;
    return temp.str();
}

void    Replace::Changer (char **av) {
    std::string line;
    std::string toString;
    size_t      pos;
    size_t      fromSize;
    size_t      toSize;

    pos = 0;
    toString = ToString(av[3]);
    fromSize = ToString(av[2]).length();
    toSize = toString.length();
    
    while (std::getline(Replace::mInputFile, line))
    {
        if (!Replace::mInputFile.eof())
            line += "\n";
        while (true)
        {
            pos = line.find(av[2], pos);
            if (pos != std::string::npos)
            {
                line.erase(pos, fromSize);
                line.insert(pos, toString);
                pos += toSize;
            }
            else
                break;
        }
        pos = 0;
        Replace::mOuputFile << line;
    }
    Replace::mOuputFile.close();
    Replace::mInputFile.close();
}

bool    Replace::FileOpener(char **av) {

    std::string     outputName;

    Replace::mInputFile.open(av[1]);
    if (!Replace::mInputFile)
        return false;
    outputName = ToString(av[1]) + ".replace";
    Replace::mOuputFile.open(outputName);
    if (!Replace::mOuputFile)
        return false;
    return true;
}

bool    Replace::InputChecker(int ac, char **av) {
    if (ac != 4)
        return false;
    for (int i = 1 ; i < ac - 1; i++)
    {
        std::string         check;

        check = Replace::ToString(av[i]);
        if (check.empty())
            return false;
    }
    return true;
}

Replace::Replace (void){

}

Replace::~Replace (void){

}