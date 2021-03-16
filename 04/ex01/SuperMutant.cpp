#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& other) : Enemy(other)
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant& SuperMutant::operator=(const SuperMutant& other)
{
    _hitPoints = other._hitPoints;
    _type =  other._type;
    return (*this);
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
    damage = damage < 4 ? 0 : damage - 3;
    _hitPoints = _hitPoints - damage < 0 ? 0 : _hitPoints - damage;
}