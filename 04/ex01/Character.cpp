#include "Character.hpp"

Character::Character(std::string const & name) : _name(name) , _ap(40), _weapon(NULL){}

Character::Character(const Character& other){*this = other;}

Character& Character::operator=(const Character& other)
{
    _name = other._name;
    _ap = other._ap;
    _weapon = other._weapon;
    return (*this);
}

Character::~Character(){}

void Character::recoverAP(){_ap = _ap + 10 > 40 ? 40 : _ap + 10;}

std::string const Character::getName() const { return (_name);}

void Character::equip(AWeapon* weapon){_weapon = weapon;}

void Character::attack(Enemy* enemy)
{
    if (!_weapon || !enemy || _ap < _weapon->getAPCost())
        return ;
    _ap -= _weapon->getAPCost();
    std::cout << _name << " attack " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
    _weapon->attack();
    enemy->takeDamage(_weapon->getDamage());
    if (!enemy->getHP())
        delete enemy;
}

int Character::getAp() const {return (_ap);}

AWeapon* Character::getWeapon() const {return (this->_weapon);}

std::ostream& operator<<(std::ostream &flux, Character const& character)
{
    std::string buffer;
    flux << character.getName() << " has " << character.getAp() << " AP and ";
    if (character.getWeapon()) 
        flux << "carries a " << character.getWeapon()->getName();
    else
        flux << "is unarmed";
    flux << std::endl;
    return (flux);
}
