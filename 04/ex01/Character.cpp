#include "Character.hpp"

Character::Character(std::string const & name) : _name(name){}

Character::Character(const Character& other){*this = other;}

Character& Character::operator=(const Character& other)
{
    _name = other._name;
    _ap = other._ap;
    return (*this);
}

Character::~Character(){}

void Character::recoverAP(){_ap = _ap + 10 > 40 ? 40 : _ap + 10;}

std::string const Character::getName() const { return (_name);}

void Character::equip(AWeapon* weapon){_weapon = weapon;}

// void Character::attack

std::ostream& operator<<(std::ostream &flux, Character const& character)
{
    std::string buffer;
    buffer += character.getName();
    flux << buffer;
    return (flux);
}
