#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8){}

PowerFist::PowerFist(const PowerFist& other) : AWeapon(other){}

PowerFist& PowerFist::operator=(const PowerFist& other)
{
    _name = other._name;
    _apCost = other._apCost;
    _damage = other._damage;
    return (*this);
}

PowerFist::~PowerFist(){}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM ! *" << std::endl;
}
