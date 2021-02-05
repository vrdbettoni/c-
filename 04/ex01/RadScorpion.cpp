#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& other) : Enemy(other)
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion& RadScorpion::operator=(const RadScorpion& other)
{
    _hitPoints = other._hitPoints;
    _type =  other._type;
    return (*this);
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}