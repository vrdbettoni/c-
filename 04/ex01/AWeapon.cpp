#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _damage(damage), _apCost(apcost)
{}

AWeapon::~AWeapon(){}

AWeapon::AWeapon(const AWeapon& other) {*this = other;}

AWeapon& AWeapon::operator=(const AWeapon& other)
{
    _name = other._name;
    _damage = other._damage;
    _apCost = other._apCost;
    return (*this); 
}

std::string AWeapon::getName() const {return (_name);}
int AWeapon::getAPCost() const {return (_apCost);}
int AWeapon::getDamage() const {return (_damage);}
