#include <iostream>
#include <sstream>
#include <fstream>

#include "Replace.hpp"

// std::string ToString(char *str);

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
    else if ()
}

// int main(int ac, char **av)
// {
//     std::ifstream   inputFile;
//     std::ofstream   outputFile;
//     std::string     line;
//     std::string     temp;
//     std::string     toString;
//     size_t          pos;
//     size_t          fromSize;
//     size_t          toSize;
    
//     pos = 0;
//     fromSize = 0;
//     toSize = 0;
//     if (ac != 4)
//     {
//         std::cerr << "check input value" << std::endl;
//         return 1;
//     }
//     if (!inputFile)
//     {
//         std::cerr << "error";
//         return 1;
//     }
//     fromSize = ToString(av[2]).length();
//     toString = ToString(av[3]);
//     toSize = toString.length();
//     inputFile.open(av[1]);
//     if (inputFile.fail())
//     {
//         std::cerr << "inputfile open error!" << std::endl;
//         return 1;
//     }
//     temp = ToString(av[1]) + ".replace";
//     outputFile.open(temp);
//     if (outputFile.fail())
//     {
//         std::cerr << "outputfile open error!" << std::endl;
//         return 1;
//     }
//     while (std::getline(inputFile, line))
//     {
//         while (true)
//         {
//             pos = line.find(av[2], pos);
//             if (pos != std::string::npos)
//             {
//                 line.erase(pos, fromSize);
//                 line.insert(pos, toString);
//                 pos += toSize;
//             }
//             else
//                 break;    
//         }
//         outputFile << line;
//     }
//     return 0;
// }


// std::string ToString(char *str)
// {
//     std::stringstream temp;

//     temp << str;
//     return temp.str();
// }