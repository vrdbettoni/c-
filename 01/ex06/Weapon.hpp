#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include <sstream>

class Weapon
{
    public:
        Weapon(std::string weap);

        const std::string& getType();
        void setType(std::string weap);
    
    private:
        std::string type;
};

#endif