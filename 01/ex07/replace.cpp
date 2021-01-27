#include "replace.hpp"

Replace::Replace(std::string fileName, std::string s1, std::string s2) : _fileName(fileName), _s1(s1), _s2(s2){}

int Replace::check()
{
    std::string     buffer;
    std::ifstream   flux(_fileName);
    
    if (!flux){
        std::cout << "Error: cannot open " << _fileName << std::endl;
        return (1);
    }
    while (getline(flux, buffer))
        textBefore << buffer;   
    buffer.replace(_s1, _s2);
    std::cout << buffer << std::endl;
    return (0);
}