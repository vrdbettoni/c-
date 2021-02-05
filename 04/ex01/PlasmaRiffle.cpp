#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5){}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& other) : AWeapon(other){}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle& other)
{
    _name = other._name;
    _apCost = other._apCost;
    _damage = other._damage;
    return (*this);
}

PlasmaRifle::~PlasmaRifle(){}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
