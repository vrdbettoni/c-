#include "Weapon.hpp"

Weapon::Weapon(std::string weap) : type(weap){}

const std::string &Weapon::getType()
{
    return (this->type);
}

void Weapon::setType(std::string weap)
{
    type = weap;
}
