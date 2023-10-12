#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <sstream>

class Replace {

private :
    std::ifstream   mInputFile;
    std::ofstream   mOuputFile;

public :
    std::string     ToString(char *str);

    bool    InputChecker(int ac, char **av);
    bool    FileOpener(char **av);
    void    Changer(char **av);
    Replace(void);
    ~Replace(void);
};

#endif