#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class   Brain
{
    public:
        Brain();

        const std::string identify() const;
    
    private:
        int     Qi;
};

#endif