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

    bool    Replace::InputChecker(int ac, char **av);
    bool    Replace::FileOpener(char **av);
    bool    Replace::Changer(char **av);
    Replace(void);
    ~Replace(void);
};

#endif