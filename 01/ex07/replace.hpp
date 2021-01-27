#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replace
{
    public:
        Replace(std::string fileName, std::string s1, std::string s2);
        int check();

    private:
        std::string _fileName;
        std::string _s1;
        std::string _s2;

        std::string textBefore;
        std::string textAfter;
};

#endif